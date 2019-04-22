#ifndef QUESTION_H
#define QUESTION_H

#include <QVector>

class Question
{
public:
    Question() = default;
    Question(QByteArray question, QVector<bool> correctAns, QVector<QByteArray> a,int number)
        : _question(std::move(question))
        , _correctAnswers(std::move(correctAns))
          , _answers(std::move(a))
        , _questionNumber(number)
    {}

    const QByteArray& question() const;

    const QVector<bool>& correctAnswers() const;

    const QVector<QByteArray>& answers() const;

    int questionNumber() const;
    void setQuestionNumber(int questionNumber);

private:
    QByteArray _question;
    QVector<bool> _correctAnswers;
    QVector<QByteArray> _answers;
    int   _questionNumber;
};

#endif // QUESTION_H
