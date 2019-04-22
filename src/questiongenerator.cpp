#include "questiongenerator.h"
#include "ui_questiongenerator.h"
#include <QFileDialog>
#include <QTextStream>
#include <QTextCodec>
#include <QLatin1String>
#include <QList>
#include <random>
#include <iostream>
#include <algorithm>
#include <QMessageBox>
#include "topics.h"
#include "config.h"
#include "question.h"
QuestionGenerator::QuestionGenerator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QuestionGenerator)
{
    ui->setupUi(this);
    _ranges.fill (false, cf::number_of_questions);
    //! defaultly all Topics are checked
    _topics.fill (true, cf::number_of_topics);
    _fillRanges ();
    ui->answerButton_1->setLayout (ui->horizontalLayout_14);
    ui->answerButton_2->setLayout (ui->horizontalLayout_15);
    ui->answerButton_3->setLayout (ui->horizontalLayout_16);
    ui->answerButton_4->setLayout (ui->horizontalLayout_17);
    ui->answerButton_5->setLayout (ui->horizontalLayout_18);
    ui->answerButton_6->setLayout (ui->horizontalLayout_19);
    ui->answerButton_7->setLayout (ui->horizontalLayout_20);
    ui->answerButton_8->setLayout (ui->horizontalLayout_21);

    _fillButtonArray();
    _fillCheckBoxArray ();
    _fillLabelArray ();
}


QuestionGenerator::~QuestionGenerator()
{
    delete _topicsWindow;
    delete ui;
}
int QuestionGenerator::_loadFile( const QString& path ) {

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return -1;

    QTextStream in(&file);
    //! file uses UTF8 encoding
    in.setCodec ("UTF-8");
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    int counter = 0;
    QVector<QByteArray> answersToCertainQ; // answers to the specific question
    QVector<bool> correctAnswersToCertainQ; // correct answers to the specific question

    while(!in.atEnd())
    {
        QString line = in.readLine();
        //!  question
        if (counter % (cf::number_of_answers + 1) == 0 ) {
            _myQuestions.append ({line.toLocal8Bit (),correctAnswersToCertainQ, answersToCertainQ, counter % 9});
          //  _answers.append(answersToCertainQ);
         //   _correctAnswers.append(correctAnswersToCertainQ);
         //   _questions.append (line.toLocal8Bit ());
            answersToCertainQ.clear ();
            correctAnswersToCertainQ.clear ();
        }
        //! answers, contain correct answer at the end
        else {
            correctAnswersToCertainQ.append(_isCorrectAnswer (line));
            answersToCertainQ.append(line.toLocal8Bit ());
        }
        counter++;
    }
    file.close();
    //! once the file is loaded we do NOT want to load it again
    ui->loadDefault->setEnabled (false);
    return 0;
}

bool QuestionGenerator::_isCorrectAnswer(QString& str) {
    //! removes correct answer in the end and returns if the answer
    //! was correct
    QString m = str.mid(str.size () - 2, 1);
    str.remove(str.size() - 3, 3);
    return m == "S";
}
unsigned long QuestionGenerator::_generateQuestionNumber( unsigned int l, unsigned int h) const{
    //! generates random number in the range
    //! range is given by the chosen topics
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(l - 1,h - 1);
    int result = 0;
    do {
        result = dist(rng);
    }
    while(_ranges[result] != 1);
    return result;
}
void QuestionGenerator::_clearBoxes() const
{
    for (const auto& checkBox : _checkBoxes) {
        checkBox->setChecked (false);
    }
}
void QuestionGenerator::_fillQuestion() const {
    //ui->textEdit->setText (_questions[ static_cast<int>(_numberOfQuestion) ]);
    ui->textEdit->setText ( _myQuestions[_numberOfQuestion].question ());

}
void QuestionGenerator::_fillAnswers() const {
    auto answers = _myQuestions[ _numberOfQuestion + 1 ].answers();
    for (int i = 0; i < cf::number_of_answers; ++i ) {
        //_labels[i]->setText (answers[i]);
        _labels[i]->setText (answers[ i ]);
    }
}
void QuestionGenerator::_setFontItalicUnderlined(bool b) {
    ui->textEditWrongAnswers->setFontUnderline (b);
    ui->textEditWrongAnswers->setFontItalic (b);
}
QVector<bool> QuestionGenerator::_extractInputAnswers() {
    QVector<bool> checked;
    for (const auto& checkBox : _checkBoxes) { checked.append (checkBox->isChecked ());}
    return checked;
}


void QuestionGenerator::on_generate_clicked() {
    ui->check->setEnabled (true);
    if (ui->minSpinBox->value () > ui->maxSpinBox->value ()) {
        ui->minSpinBox->setValue(ui->maxSpinBox->value ());
    }
    if (ui->sequential->isChecked ()) _numberOfQuestion = ui->minSpinBox->value () + _offset - 1;
    else { _numberOfQuestion = _generateQuestionNumber ( static_cast<unsigned int>(ui->minSpinBox->value ()),
                                                static_cast<unsigned int>(ui->maxSpinBox->value ()));
    }
    _offset++;
    _clearBoxes ();
    _fillQuestion ();
    _fillAnswers ();
 //   ui->showAnswersButton->setText ("Show answers");
  //  _showAnswersClicked = false;
 //   _clearButtonsBackground ();
}
void QuestionGenerator::on_check_clicked()
{
    auto question = _myQuestions[_numberOfQuestion + 1];
    auto userAnswers = _extractInputAnswers ();
    auto correctAnswers = question.correctAnswers ();
    auto correct = _countCorrectAnswers (userAnswers);

    QMessageBox::information(
        this,
        tr("Application Name"),
        "Score: " + QString::number (correct) + "/8" );
    // first append question
    _score += correct;
    ++_questionsAnswered;
    _updateScore ( static_cast<double>(_score)/(_questionsAnswered * 8) * 100 );
    _writeIntoWrongAnswers ();

    emit on_generate_clicked ();
}

void QuestionGenerator::_updateScore( double num ) {
    ui->score->display (num);
}

void QuestionGenerator::_writeIntoWrongAnswers() {
    auto userAnswers = _extractInputAnswers ();
    auto correctAnswers = _myQuestions[_numberOfQuestion + 1].correctAnswers ();
    //_correctAnswers[ static_cast<int>(_numberOfQuestion + 1) ];
    QString line;
    //ui->textEditWrongAnswers->append (_questions[_numberOfQuestion]);
    ui->textEditWrongAnswers->append (_myQuestions[_numberOfQuestion].question ());

    for (int i = 0; i < cf::number_of_answers; ++i) {
        line = "";
//        line += _answers[_numberOfQuestion + 1][i];
        line += _myQuestions[_numberOfQuestion + 1].answers ()[i];

        if (correctAnswers[i]) {
            ui->textEditWrongAnswers->setTextColor ("Green");
            line += " S ";
        }
        else {
            ui->textEditWrongAnswers->setTextColor ("Red");
            line += " N ";
        }
        // if user answered to i-th answer then make it italic & underlined
        _setFontItalicUnderlined (userAnswers[i]);
        // then append i-th answer
        ui->textEditWrongAnswers->append (line);
    }
    ui->textEditWrongAnswers->append ("");
}

int QuestionGenerator::_countCorrectAnswers( const QVector<bool>& userAnswers ) {
    auto correctAnswers = _myQuestions[ _numberOfQuestion + 1 ].correctAnswers();
  //  auto correctAnswers = _correctAnswers[ static_cast<int>(_numberOfQuestion + 1) ];
    return matchCount( userAnswers, correctAnswers );
}

void QuestionGenerator::on_loadDefault_clicked()
{
    if (_loadFile (QCoreApplication::applicationDirPath () + "/otazkyCorr.txt") == 0) {
        ui->generate->setEnabled (true);
        ui->chooseTopicsButton->setEnabled (true);
    }
}
void QuestionGenerator::on_clear_clicked()
{
    ui->textEditWrongAnswers->clear ();
}


void QuestionGenerator::on_chooseTopicsButton_clicked()
{
    _topicsWindow = new topics(this);
    _topicsWindow->setMarked(_topics);
    _topicsWindow->exec();
    _topics = _topicsWindow->checked ();
    _fillRanges ();
    if (std::find(_topics.begin (), _topics.end (), true) != _topics.end ()) {
        ui->check->setEnabled (true);
        ui->generate->setEnabled (true);
      //  ui->minSpinBox->setEnabled (false);
       // ui->maxSpinBox->setEnabled (false);
        emit on_generate_clicked ();
    }
    else {
        ui->minSpinBox->setEnabled (true);
        ui->maxSpinBox->setEnabled (true);
        ui->generate->setEnabled (false);
        ui->check->setEnabled (false);
    }
    ui->showAnswersButton->setEnabled (true);
}

void QuestionGenerator::_fillRanges() {
    _ranges.clear ();
    _ranges.fill (false, cf::number_of_questions);
    if (_topics[0]) fillVectorFromToWith  (_ranges, cf::range_sach_begin,    cf::range_sach_end,      true);
    if (_topics[1]) fillVectorFromToWith  (_ranges, cf::range_sach_end,      cf::range_lipid_end,     true);
    if (_topics[2]) fillVectorFromToWith  (_ranges, cf::range_lipid_end - 1, cf::range_amino_end,     true);
    if (_topics[3]) fillVectorFromToWith  (_ranges, cf::range_amino_end - 1, cf::range_nucle_end,     true);
    if (_topics[4]) fillVectorFromToWith  (_ranges, cf::range_nucle_end - 1, cf::range_tetra_end,     true);
    if (_topics[5]) fillVectorFromToWith  (_ranges, cf::range_tetra_end - 1, cf::range_acCoA_end,     true);
    if (_topics[6]) fillVectorFromToWith  (_ranges, cf::range_acCoA_end - 1, cf::range_hormo_end,     true);
    if (_topics[7]) fillVectorFromToWith  (_ranges, cf::range_hormo_end - 1, cf::range_regul_end,     true);
    if (_topics[8]) fillVectorFromToWith  (_ranges, cf::range_regul_end - 1, cf::range_nersy_end,     true);
    if (_topics[9]) fillVectorFromToWith  (_ranges, cf::range_nersy_end - 1, cf::range_eikoz_end,     true);
    if (_topics[10]) fillVectorFromToWith (_ranges, cf::range_eikoz_end - 1, cf::range_pecen_end,     true);
    if (_topics[11]) fillVectorFromToWith (_ranges, cf::range_pecen_end - 1, cf::range_molbi_end,     true);
    if (_topics[12]) fillVectorFromToWith (_ranges, cf::range_molbi_end - 1, cf::range_trave_end - 1, true);
    if (_topics[13]) fillVectorFromToWith (_ranges, cf::range_trave_end - 1, cf::range_voda_end ,     true);
    if (_topics[14]) fillVectorFromToWith (_ranges, cf::range_voda_end  - 1, cf::range_oblic_end,     true);
    if (_topics[15]) fillVectorFromToWith (_ranges, cf::range_oblic_end - 1, cf::range_enzym_end,     true);
    if (_topics[16]) fillVectorFromToWith (_ranges, cf::range_enzym_end - 1, cf::range_abr_end,       true);
    if (_topics[17]) fillVectorFromToWith (_ranges, cf::range_abr_end   - 1, cf::range_prot_end,      true);
}



void QuestionGenerator::on_minSpinBox_valueChanged(int)
{
    _offset = 0;
}

void QuestionGenerator::on_answerButton_1_clicked()
{
    if (ui->checkBox->isChecked ()) ui->checkBox->setChecked (false);
    else ui->checkBox->setChecked (true);
}
void QuestionGenerator::on_answerButton_8_clicked()
{
    if (ui->checkBox_8->isChecked ()) ui->checkBox_8->setChecked (false);
    else ui->checkBox_8->setChecked (true);
}
void QuestionGenerator::on_answerButton_7_clicked()
{
    if (ui->checkBox_7->isChecked ()) ui->checkBox_7->setChecked (false);
    else ui->checkBox_7->setChecked (true);
}
void QuestionGenerator::on_answerButton_6_clicked()
{
    if (ui->checkBox_6->isChecked ()) ui->checkBox_6->setChecked (false);
    else ui->checkBox_6->setChecked (true);
}
void QuestionGenerator::on_answerButton_5_clicked()
{
    if (ui->checkBox_5->isChecked ()) ui->checkBox_5->setChecked (false);
    else ui->checkBox_5->setChecked (true);
}
void QuestionGenerator::on_answerButton_4_clicked()
{
    if (ui->checkBox_4->isChecked ()) ui->checkBox_4->setChecked (false);
    else ui->checkBox_4->setChecked (true);
}
void QuestionGenerator::on_answerButton_3_clicked()
{
    if (ui->checkBox_3->isChecked ()) ui->checkBox_3->setChecked (false);
    else ui->checkBox_3->setChecked (true);
}
void QuestionGenerator::on_answerButton_2_clicked()
{
    if (ui->checkBox_2->isChecked ()) ui->checkBox_2->setChecked (false);
    else ui->checkBox_2->setChecked (true);
}
void QuestionGenerator::on_showAnswersButton_clicked()
{
    if (_showAnswersClicked) {
        ui->showAnswersButton->setText ("Show answers");
        _showAnswersClicked = false;
        _clearButtonsBackground ();
        return;
    }
    auto correctAnswers = _myQuestions[ _numberOfQuestion + 1 ].correctAnswers ();
 //   auto correctAnswers = _correctAnswers[ static_cast<int>(_numberOfQuestion + 1) ];

    for (int i = 0; i < cf::number_of_answers; ++i) {
        if (correctAnswers[i]) _buttons[i]->setStyleSheet (cf::green_background);
        else { _buttons[i]->setStyleSheet (cf::red_background);}
    }
    ui->showAnswersButton->setText ("Hide answers");
    _showAnswersClicked = true;
}
void QuestionGenerator::_clearButtonsBackground() {
    for (const auto& button : _buttons) { button->setStyleSheet ("");}
}



void QuestionGenerator::_fillButtonArray()
{
    _buttons.append (ui->answerButton_1);
    _buttons.append (ui->answerButton_2);
    _buttons.append (ui->answerButton_3);
    _buttons.append (ui->answerButton_4);
    _buttons.append (ui->answerButton_5);
    _buttons.append (ui->answerButton_6);
    _buttons.append (ui->answerButton_7);
    _buttons.append (ui->answerButton_8);
}
void QuestionGenerator::_fillCheckBoxArray()
{
    _checkBoxes.append (ui->checkBox);
    _checkBoxes.append (ui->checkBox_2);
    _checkBoxes.append (ui->checkBox_3);
    _checkBoxes.append (ui->checkBox_4);
    _checkBoxes.append (ui->checkBox_5);
    _checkBoxes.append (ui->checkBox_6);
    _checkBoxes.append (ui->checkBox_7);
    _checkBoxes.append (ui->checkBox_8);
}
void QuestionGenerator::_fillLabelArray()
{
    _labels.append (ui->label);
    _labels.append (ui->label_2);
    _labels.append (ui->label_3);
    _labels.append (ui->label_4);
    _labels.append (ui->label_5);
    _labels.append (ui->label_6);
    _labels.append (ui->label_7);
    _labels.append (ui->label_8);
}

template < typename T >
int QuestionGenerator::matchCount( const QVector<T>& first, const QVector<T>& sec ) {
    int counter = 0;
    int min = std::min(first.size (), sec.size());
    for ( int i = 0; i < min; ++i ) {
        if ( first[i] == sec[i] )
            ++counter;
    }
    return counter;
}

template < typename T >
void QuestionGenerator::fillVectorFromToWith( QVector<T>& vec, int from, int to, const T& val) {
    if ( from >= to ) return;
    for (; from < to; ++from ) {
        vec[from] = val;
    }
}
