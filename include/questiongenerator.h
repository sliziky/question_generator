#ifndef QUESTIONGENERATOR_H
#define QUESTIONGENERATOR_H

#include <QDialog>
#include <QFile>
#include <QVector>
#include "topics.h"
class topics;
class QLabel;
class Question;
namespace Ui {
    class QuestionGenerator;
}

class QuestionGenerator : public QDialog
{

Q_OBJECT

public:
    explicit QuestionGenerator(QWidget *parent = nullptr);
    QuestionGenerator(const QuestionGenerator &) = delete;
    QuestionGenerator(QuestionGenerator &&) = delete;
    QuestionGenerator& operator=(const QuestionGenerator &) = delete;
    QuestionGenerator& operator=(QuestionGenerator &&) = delete;
    ~QuestionGenerator() override;


    template < typename T >
    int matchCount( const QVector<T>&, const QVector<T>& );

    template < typename T >
    void fillVectorFromToWith( QVector<T>&, int,int, const T& );

private slots:
    void on_generate_clicked();
    void on_check_clicked();
    void on_loadDefault_clicked();
    void on_clear_clicked();
    void on_chooseTopicsButton_clicked();

    void on_minSpinBox_valueChanged(int);

    void on_answerButton_1_clicked();
    void on_answerButton_2_clicked();
    void on_answerButton_3_clicked();
    void on_answerButton_4_clicked();
    void on_answerButton_5_clicked();
    void on_answerButton_6_clicked();
    void on_answerButton_7_clicked();
    void on_answerButton_8_clicked();

    void on_showAnswersButton_clicked();

public:
    void                         setTopics(QVector<bool>&&);
private:
    Ui::QuestionGenerator*        ui;

  //  QVector<QVector<QByteArray>> _answers;
    QVector<QPushButton*>        _buttons;
    QVector<QCheckBox*>          _checkBoxes;
  //  QVector<QVector<bool>>       _correctAnswers;
    QVector<QLabel*>             _labels;
    unsigned long                _numberOfQuestion { 1 };
    int                          _offset { 0 };
    float                        _questionsAnswered { 0 };
   // QVector<QByteArray>          _questions;
    QVector<bool>                _ranges;
    float                        _score { 0 };
    QVector<bool>                _topics;
    topics*                      _topicsWindow {};
    QVector<Question>            _myQuestions;
    int                          _countCorrectAnswers( const QVector<bool>&);
    QVector<bool>                _extractInputAnswers();


    unsigned long                _generateQuestionNumber( unsigned int, unsigned int ) const;
    int                          _loadFile( const QString& );
    bool                         _isCorrectAnswer( QString& );
    // helper functions
    void                         _fillQuestion() const;
    void                         _clearBoxes() const;
    void                         _clearButtonsBackground();
    void                         _setFontItalicUnderlined(bool);
    void                         _fillAnswers() const;
    void                         _fillRanges();
    void                         _fillButtonArray();
    void                         _fillCheckBoxArray();
    void                         _fillLabelArray();
    bool                         _showAnswersClicked {false};
    void                         _writeIntoWrongAnswers();
    void                         _updateScore(double);


};

#endif // QUESTIONGENERATOR_H