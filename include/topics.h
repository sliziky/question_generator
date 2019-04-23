#ifndef TOPICS_H
#define TOPICS_H

#include <QDialog>

class QCheckBox;

namespace Ui {
class topics;
}

class topics : public QDialog
{
    Q_OBJECT

public:
    explicit topics(QWidget *parent = nullptr);
    topics( const topics& ) = delete;
    topics( topics&& ) = delete;
    topics& operator=( const topics& ) = delete;
    topics& operator=( topics&& ) = delete;
    ~topics() override;

    QVector<bool> checked() const { return _checked;  }
    void closeEvent(QCloseEvent*) override;



private slots:
    void on_okButton_clicked();
    void on_allCheckBox_clicked();
    void on_clearButton_clicked();

public:
    void setChecked( const QVector<bool>& ) const;

private:
    Ui::topics*         ui;
    QVector<QCheckBox*> _boxes;
    QVector<bool>       _checked { true };

    void                _fillBoxesVector();
    QVector<bool>       _getChecked() const;
};

#endif // TOPICS_H
