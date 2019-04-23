#include "question.h"

const QByteArray& Question::question() const
{
    return _question;
}

const QVector<bool>& Question::correctAnswers() const
{
    return _correctAnswers;
}

const QVector<QByteArray>& Question::answers() const
{
    return _answers;
}
