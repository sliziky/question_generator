#ifndef QUESTION_H
#define QUESTION_H

#include <QVector>

class Question
{
public:
    Question() = default;
    Question(QByteArray question, QVector<bool> correctAns, QVector<QByteArray> answers)
        : _question(std::move(question))
        , _correctAnswers(std::move(correctAns))
        , _answers(std::move(answers))
    {}

    const QByteArray& question() const;
    const QVector<bool>& correctAnswers() const;
    const QVector<QByteArray>& answers() const;

private:
    QByteArray _question;
    QVector<bool> _correctAnswers;
    QVector<QByteArray> _answers;
};

#endif // QUESTION_H
