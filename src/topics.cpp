#include "topics.h"
#include "ui_topics.h"
#include "questiongenerator.h"
#include <iostream>
#include <QCloseEvent>
topics::topics(QWidget *parent)
    : QDialog(parent)
      , ui(new Ui::topics)
{
    ui->setupUi(this);
    _fillBoxesVector();
}

topics::~topics()
{
    delete ui;
}

void topics::closeEvent(QCloseEvent*) {
    emit on_okButton_clicked ();
}

void topics::on_okButton_clicked()
{
    _checked = _getChecked ();
    close();
}

void topics::_fillBoxesVector() {
    _boxes.append (ui->checkBox_1);
    _boxes.append (ui->checkBox_2);
    _boxes.append (ui->checkBox_3);
    _boxes.append (ui->checkBox_4);
    _boxes.append (ui->checkBox_5);
    _boxes.append (ui->checkBox_6);
    _boxes.append (ui->checkBox_7);
    _boxes.append (ui->checkBox_8);
    _boxes.append (ui->checkBox_9);
    _boxes.append (ui->checkBox_10);
    _boxes.append (ui->checkBox_11);
    _boxes.append (ui->checkBox_12);
    _boxes.append (ui->checkBox_13);
    _boxes.append (ui->checkBox_14);
    _boxes.append (ui->checkBox_15);
    _boxes.append (ui->checkBox_16);
    _boxes.append (ui->checkBox_17);
    _boxes.append (ui->checkBox_18);
}

void topics::setChecked( const QVector<bool>& checked ) const {
    /**
    @in QVector<bool>
    Functon checks the given checkboxes
    */
    for ( int i = 0; i < 18; ++i ) {
        checked[ i ] ? _boxes[ i ]->setChecked(true) : _boxes[ i ]->setChecked(false);
    }
    //  "All" checkbox
    if (checked.contains(false)) { ui->allCheckBox->setChecked(false); }
    else { ui->allCheckBox->setChecked(true); }
}

QVector<bool> topics::_getChecked() const {
    return {ui->checkBox_1->isChecked (),
            ui->checkBox_2->isChecked (),
            ui->checkBox_3->isChecked (),
            ui->checkBox_4->isChecked (),
            ui->checkBox_5->isChecked (),
            ui->checkBox_6->isChecked (),
            ui->checkBox_7->isChecked (),
            ui->checkBox_8->isChecked (),
            ui->checkBox_9->isChecked (),
            ui->checkBox_10->isChecked (),
            ui->checkBox_11->isChecked (),
            ui->checkBox_12->isChecked (),
            ui->checkBox_13->isChecked (),
            ui->checkBox_14->isChecked (),
            ui->checkBox_15->isChecked (),
            ui->checkBox_16->isChecked (),
            ui->checkBox_17->isChecked (),
            ui->checkBox_18->isChecked ()
    };
}

void topics::on_allCheckBox_clicked () {
    // check all the checkboxes
    ui->allCheckBox->setChecked (true);
    setChecked( QVector<bool> (18, true) );
}

void topics::on_clearButton_clicked()
{
    // uncheck all the checkboxes
    ui->allCheckBox->setChecked (false);
    setChecked( QVector<bool> (18, false) );
}
