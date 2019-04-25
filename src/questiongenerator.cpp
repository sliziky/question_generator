#include <QFileDialog>
#include <QLatin1String>
#include <QList>
#include <QMessageBox>
#include <QTextStream>
#include <QTextCodec>

#include <iostream>
#include <random>

#include "config.h"
#include "numbergenerator.h"
#include "questiongenerator.h"
#include "question.h"
#include "topics.h"
#include "ui_questiongenerator.h"

QuestionGenerator::QuestionGenerator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QuestionGenerator)
{
    ui->setupUi(this);
    // defaultly all Topics are checked
    _topics.fill (true, cf::number_of_topics);
    // hack to have buttons with text as if the text was in QLabel
    ui->answerButton_1->setLayout (ui->horizontalLayout_14);
    ui->answerButton_2->setLayout (ui->horizontalLayout_15);
    ui->answerButton_3->setLayout (ui->horizontalLayout_16);
    ui->answerButton_4->setLayout (ui->horizontalLayout_17);
    ui->answerButton_5->setLayout (ui->horizontalLayout_18);
    ui->answerButton_6->setLayout (ui->horizontalLayout_19);
    ui->answerButton_7->setLayout (ui->horizontalLayout_20);
    ui->answerButton_8->setLayout (ui->horizontalLayout_21);
    // just store all the UI things into vectors
    _fillButtonArray();
    _fillCheckBoxArray ();
    _fillLabelArray ();
}


QuestionGenerator::~QuestionGenerator()
{
    delete ui;
}

/**
 * Return number of matches in two vectors. If vectors are not of the same size, traverse only
 * to the size of the smaller one.
 * @tparam T type of elements in vector
 * @param[in] first - vector to find matches
 * @param[in] sec - vector to find matches
 * @return Number of matches
 */
template < typename T >
int QuestionGenerator::matchCount( const QVector<T>& first, const QVector<T>& sec ) {
    int counter = 0;
    int min = std::min( first.size(), sec.size() );
    for ( int i = 0; i < min; ++i ) {
        if ( first[ i ] == sec[ i ] )
            ++counter;
    }
    return counter;
}

/**
 * Fill vector in range <from,to) with Val
 * @tparam T type of elements in vector
 * @param[in/out] vec - vector to fill
 * @param[in] from - position to start from
 * @param[in] to - position to end in
 * @param[in] val - value to fill
 */
template < typename T >
void QuestionGenerator::fillVectorFromToWith( QVector<T> & vec, int from, int to, const T & val ) {
    if ( from >= to ) return;
    for ( ; from < to; ++from ) {
        vec[ from ] = val;
    }
}

/**
 * Return (higher) closest position of Item from From position
 * @tparam T type of elements in vector
 * @param[in] vec - vector to find in
 * @param[in] from - position to start from
 * @param[in] item - element to find
 * @return Position of Item in vec, if not present, returns -1
 */
template < typename T >
int QuestionGenerator::findClosestPosition( const QVector<T>& vec, int from, const T& item ) {
    ++from;
    if (from == vec.size () - 1) return -1;
    for ( ;from < vec.size (); ++from) {
        if ( vec[from] == item ) return from;
    }
    return -1;
}


/**
 * Functions loads file from the path
 * @param[in] path - path for given file
 * @return 0 if file was loaded sucessfully, -1 otherwise
 */
int QuestionGenerator::_loadFile( const QString& path ) {

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return -1;
    }

    QTextStream ts(&file);
    // file uses UTF8 encoding
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    ts.setCodec ("UTF-8");

    int lineNumber = 0;
    QVector<QByteArray> answersToCertainQ; // answers to the specific question
    QVector<bool> correctAnswersToCertainQ; // correct answers to the specific question
    while(!ts.atEnd())
    {
        QString line = ts.readLine();
        //  question
        if (lineNumber % (cf::number_of_answers + 1) == 0 ) {
            _questions.append ({ line.toLocal8Bit (), correctAnswersToCertainQ, answersToCertainQ });
            answersToCertainQ.clear ();
            correctAnswersToCertainQ.clear ();
        }
        // answers, contain correct answer at the end
        else {
            correctAnswersToCertainQ.append(_isCorrectAnswer (line));
            answersToCertainQ.append(line.toLocal8Bit ());
        }
        lineNumber++;
    }
    // once the file is loaded we do NOT want to load it again
    ui->loadDefault->setEnabled (false);
    return 0;
}

bool QuestionGenerator::_isCorrectAnswer(QString& str) {
    // removes correct answer in the end and returns if the answer
    // was correct
    QString m = str.mid(str.size () - 2, 1);
    str.remove(str.size() - 3, 3);
    return m == "S";
}

/**
 * @brief Function generates random number in range <l, h>. Number must be from chosen topics.
 * @param l - lower bound
 * @param h - upper bound
 * @return Random-generated number
 */
unsigned long QuestionGenerator::_generateQuestionNumber(unsigned int l, unsigned int h) const{
    numberGenerator ng(l - 1, h - 1);
    int randomNumber = 0;
    do {
        randomNumber = ng();
    }
    while(_ranges[ randomNumber ] != 1);
    return randomNumber;
}
void QuestionGenerator::_clearBoxes() const
{
    for (const auto& checkBox : _checkBoxes) {
        checkBox->setChecked (false);
    }
}
void QuestionGenerator::_fillQuestionLabel() const {
    ui->textEdit->setText (_questions[_numberOfQuestion].question ());
}
void QuestionGenerator::_fillAnswersLabel() const {
    auto answers = _questions[ _numberOfQuestion + 1 ].answers();
    for (int i = 0; i < cf::number_of_answers; ++i ) {
        _labels[i]->setText (answers[ i ]);
    }
}
void QuestionGenerator::_setFontItalicUnderlined(bool b) {
    ui->textEditWrongAnswers->setFontUnderline (b);
    ui->textEditWrongAnswers->setFontItalic (b);
}
QVector<bool> QuestionGenerator::_getUserAnswers() {
    QVector<bool> checked;
    for (const auto& checkBox : _checkBoxes) { checked.append (checkBox->isChecked ()); }
    return checked;
}

/**
 * Generates a new question depending on Sequential/Random chosen.
 * Fullfills labels with corresponding question and answer
 */
void QuestionGenerator::on_generate_clicked() {
    ui->check->setEnabled (true);

    // make sure maxSpinBox contains higher value
    if (ui->minSpinBox->value () > ui->maxSpinBox->value ()) {
        ui->minSpinBox->setValue(ui->maxSpinBox->value ());
    }
    // return to previous question
    if (_prevButtonClicked) {
        // sequential questions
        if (ui->sequential->isChecked ()) {
            _numberOfQuestion > 0 ? _numberOfQuestion -= 1 : 0;
        }
        else _numberOfQuestion = _numberOfPrevQ;

    }
    // generate new question
    else {
        // remember number of previous q
        _numberOfPrevQ = _numberOfQuestion;
        if (ui->sequential->isChecked ()) {
            std::cerr << _numberOfQuestion << "\n";
            // skip unchecked topics
            _numberOfQuestion = findClosestPosition(_ranges, _numberOfQuestion, true);
            if (_numberOfQuestion == -1) _numberOfQuestion = 0; // none topics
        }
        else {
            _numberOfQuestion = _generateQuestionNumber ( static_cast<unsigned int>(ui->minSpinBox->value ()),
                                                          static_cast<unsigned int>(ui->maxSpinBox->value ()));
        }
    }

    _clearBoxes ();
    _fillQuestionLabel ();
    _fillAnswersLabel ();
    ui->showAnswersButton->setText ("Show answers");
    ui->prevButton->setEnabled (true);
    _showAnswersClicked = false;
    _clearButtonsBackground ();
}

/**
 * Function update score according to number of user correct answers
 * If question was NOT answered correctly(full score) then append question to the
 * textEdit with other wrong answers
 */
void QuestionGenerator::on_check_clicked()
{
    auto userAnswers = _getUserAnswers ();
    auto correctAnswers = _questions[ _numberOfQuestion + 1 ].correctAnswers ();
    auto correct = _countCorrectAnswers (userAnswers);

    QMessageBox::information(
        this,
        tr("Application Name"),
        "Score: " + QString::number (correct) + "/8" );

    _score += correct;
    _updateScore ( static_cast<double>(_score)/(++_questionsAnswered * 8) * 100 );
    _writeIntoWrongAnswers ();
    emit on_generate_clicked ();
}

void QuestionGenerator::_updateScore( double num ) {
    ui->score->display (num);
}

/**
 * Answers which are correct are marked green and S(correct) is appended
 * Answers which are NOT correct are marked red and N(incorrect) is appended
 * Answers which user choosed are italic & underlined
 * Question with these answers is appended into Wrong Answers textedit
 */
void QuestionGenerator::_writeIntoWrongAnswers() {

    auto userAnswers = _getUserAnswers ();
    auto correctAnswers = _questions[ _numberOfQuestion + 1 ].correctAnswers ();

    ui->textEditWrongAnswers->setTextColor("Black");
    ui->textEditWrongAnswers->append (_questions[_numberOfQuestion].question ());

    QString line;
    for (int i = 0; i < cf::number_of_answers; ++i) {
        line.clear();
        line += _questions[ _numberOfQuestion + 1 ].answers ()[i];
        // if the answer is correct
        if (correctAnswers[ i ]) {
            ui->textEditWrongAnswers->setTextColor ("Green");
            line += " S ";
        }
        else {
            ui->textEditWrongAnswers->setTextColor ("Red");
            line += " N ";
        }
        // if user answered to i-th answer then make it italic & underlined
        _setFontItalicUnderlined (userAnswers[ i ]);
        ui->textEditWrongAnswers->append (line);
    }

    ui->textEditWrongAnswers->append("");
}

int QuestionGenerator::_countCorrectAnswers( const QVector<bool>& userAnswers ) {
    auto correctAnswers = _questions[ _numberOfQuestion + 1 ].correctAnswers();
    return matchCount( userAnswers, correctAnswers );
}

void QuestionGenerator::on_loadDefault_clicked()
{
    if (_loadFile (QCoreApplication::applicationDirPath () + "/otazkyCorr.txt") == 0) {
        // file was successfuly loaded
        ui->chooseTopicsButton->setEnabled (true);
    }
}

void QuestionGenerator::on_clear_clicked()
{
    ui->textEditWrongAnswers->clear ();
}


/**
 * Function shows new window with all of the topics
 * User can choose any of them
 * If at least 1 topics is checked, allow user to generate questions
 */
void QuestionGenerator::on_chooseTopicsButton_clicked()
{
    // opens new window where user can choose topics
    auto _topicsWindow = std::make_unique< topics >(this);
    _topicsWindow->setChecked(_topics);
    _topicsWindow->exec();

    _topics = _topicsWindow->checked ();
    _fillRanges ();

    // at least 1 checkbox is checked
    if (std::find(_topics.begin (), _topics.end (), true) != _topics.end ()) {
        ui->check->setEnabled (true);
        ui->generate->setEnabled (true);
        ui->showAnswersButton->setEnabled (true);
        emit on_generate_clicked ();
    }
    else {
        ui->prevButton->setEnabled (false);
        ui->generate->setEnabled (false);
        ui->check->setEnabled (false);
    }
}

/**
 * Function fills vector of bools according to topics choosed
 * If _ranges[ i ] is true, we want to generate that question
 */
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
    if (_topics[12]) fillVectorFromToWith (_ranges, cf::range_molbi_end - 1, cf::range_trave_end,     true);
    if (_topics[13]) fillVectorFromToWith (_ranges, cf::range_trave_end - 1, cf::range_voda_end ,     true);
    if (_topics[14]) fillVectorFromToWith (_ranges, cf::range_voda_end  - 1, cf::range_oblic_end,     true);
    if (_topics[15]) fillVectorFromToWith (_ranges, cf::range_oblic_end - 1, cf::range_enzym_end,     true);
    if (_topics[16]) fillVectorFromToWith (_ranges, cf::range_enzym_end - 1, cf::range_abr_end,       true);
    if (_topics[17]) fillVectorFromToWith (_ranges, cf::range_abr_end   - 1, cf::range_prot_end,      true);
}
void QuestionGenerator::on_minSpinBox_valueChanged(int)
{
    _numberOfQuestion = ui->minSpinBox->value () - 1;
}
void QuestionGenerator::on_answerButton_1_clicked()
{
    if (ui->checkBox->isChecked ()) ui->checkBox->setChecked (false);
    else ui->checkBox->setChecked (true);
}
void QuestionGenerator::on_answerButton_2_clicked()
{
    if (ui->checkBox_2->isChecked ()) ui->checkBox_2->setChecked (false);
    else ui->checkBox_2->setChecked (true);
}
void QuestionGenerator::on_answerButton_3_clicked()
{
    if (ui->checkBox_3->isChecked ()) ui->checkBox_3->setChecked (false);
    else ui->checkBox_3->setChecked (true);
}
void QuestionGenerator::on_answerButton_4_clicked()
{
    if (ui->checkBox_4->isChecked ()) ui->checkBox_4->setChecked (false);
    else ui->checkBox_4->setChecked (true);
}
void QuestionGenerator::on_answerButton_5_clicked()
{
    if (ui->checkBox_5->isChecked ()) ui->checkBox_5->setChecked (false);
    else ui->checkBox_5->setChecked (true);
}
void QuestionGenerator::on_answerButton_6_clicked()
{
    if (ui->checkBox_6->isChecked ()) ui->checkBox_6->setChecked (false);
    else ui->checkBox_6->setChecked (true);
}
void QuestionGenerator::on_answerButton_7_clicked()
{
    if (ui->checkBox_7->isChecked ()) ui->checkBox_7->setChecked (false);
    else ui->checkBox_7->setChecked (true);
}
void QuestionGenerator::on_answerButton_8_clicked()
{
    if (ui->checkBox_8->isChecked ()) ui->checkBox_8->setChecked (false);
    else ui->checkBox_8->setChecked (true);
}

/**
 * Function colors button green if it's correct answer, to the red otherwise.
 * Swaps text of button "Show answers"/"Hide answers"
 */
void QuestionGenerator::on_showAnswersButton_clicked()
{	
    if (_showAnswersClicked) {
        // hide the answers
        _showAnswersClicked = false;
        _clearButtonsBackground ();
        ui->showAnswersButton->setText ("Show answers");
        return;
    }

    auto correctAnswers = _questions[ _numberOfQuestion + 1 ].correctAnswers ();
    for (int i = 0; i < cf::number_of_answers; ++i) {
        const QString backgroundColor = correctAnswers[ i ] ? cf::green_background : cf::red_background;
        _buttons[ i ]->setStyleSheet(backgroundColor);
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

void QuestionGenerator::on_prevButton_clicked()
{
    _prevButtonClicked = true;
    if (_offset > 2) --_offset;
    emit on_generate_clicked ();
    _prevButtonClicked = false;
}

void QuestionGenerator::on_sequential_stateChanged(int)
{
    _numberOfQuestion = ui->minSpinBox->value () - 2;
}
