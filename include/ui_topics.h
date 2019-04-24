/********************************************************************************
** Form generated from reading UI file 'topics.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPICS_H
#define UI_TOPICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_topics
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *allCheckBox;
    QPushButton *clearButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_1;
    QCheckBox *checkBox_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QCheckBox *checkBox_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QCheckBox *checkBox_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QCheckBox *checkBox_8;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_11;
    QCheckBox *checkBox_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QCheckBox *checkBox_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QCheckBox *checkBox_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QCheckBox *checkBox_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QCheckBox *checkBox_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QCheckBox *checkBox_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QCheckBox *checkBox_15;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QCheckBox *checkBox_16;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QCheckBox *checkBox_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QCheckBox *checkBox_18;
    QPushButton *okButton;

    void setupUi(QDialog *topics)
    {
        if (topics->objectName().isEmpty())
            topics->setObjectName(QString::fromUtf8("topics"));
        topics->resize(160, 586);
        layoutWidget = new QWidget(topics);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 137, 547));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        allCheckBox = new QCheckBox(layoutWidget);
        allCheckBox->setObjectName(QString::fromUtf8("allCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(allCheckBox->sizePolicy().hasHeightForWidth());
        allCheckBox->setSizePolicy(sizePolicy);
        allCheckBox->setChecked(true);

        horizontalLayout->addWidget(allCheckBox);


        verticalLayout_3->addLayout(horizontalLayout);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 2px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 0 8px;\n"
"  background: green; color:white}"));

        verticalLayout_3->addWidget(clearButton);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy1);

        horizontalLayout_1->addWidget(label_1);

        checkBox_1 = new QCheckBox(layoutWidget);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox_1->sizePolicy().hasHeightForWidth());
        checkBox_1->setSizePolicy(sizePolicy2);

        horizontalLayout_1->addWidget(checkBox_1, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy2.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(checkBox_2, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_3);

        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        sizePolicy2.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(checkBox_3, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_4);

        checkBox_4 = new QCheckBox(layoutWidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        sizePolicy2.setHeightForWidth(checkBox_4->sizePolicy().hasHeightForWidth());
        checkBox_4->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(checkBox_4, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_5);

        checkBox_5 = new QCheckBox(layoutWidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        sizePolicy2.setHeightForWidth(checkBox_5->sizePolicy().hasHeightForWidth());
        checkBox_5->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(checkBox_5, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_6);

        checkBox_6 = new QCheckBox(layoutWidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        sizePolicy2.setHeightForWidth(checkBox_6->sizePolicy().hasHeightForWidth());
        checkBox_6->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(checkBox_6, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setStyleSheet(QString::fromUtf8("}"));

        horizontalLayout_7->addWidget(label_7);

        checkBox_7 = new QCheckBox(layoutWidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        sizePolicy2.setHeightForWidth(checkBox_7->sizePolicy().hasHeightForWidth());
        checkBox_7->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(checkBox_7, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_8);

        checkBox_8 = new QCheckBox(layoutWidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        sizePolicy2.setHeightForWidth(checkBox_8->sizePolicy().hasHeightForWidth());
        checkBox_8->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(checkBox_8, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(label_11);

        checkBox_9 = new QCheckBox(layoutWidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        sizePolicy2.setHeightForWidth(checkBox_9->sizePolicy().hasHeightForWidth());
        checkBox_9->setSizePolicy(sizePolicy2);

        horizontalLayout_17->addWidget(checkBox_9, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);

        horizontalLayout_20->addWidget(label_20);

        checkBox_10 = new QCheckBox(layoutWidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        sizePolicy2.setHeightForWidth(checkBox_10->sizePolicy().hasHeightForWidth());
        checkBox_10->setSizePolicy(sizePolicy2);

        horizontalLayout_20->addWidget(checkBox_10, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        checkBox_11 = new QCheckBox(layoutWidget);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkBox_11->sizePolicy().hasHeightForWidth());
        checkBox_11->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(checkBox_11);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(label_9);

        checkBox_12 = new QCheckBox(layoutWidget);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        sizePolicy2.setHeightForWidth(checkBox_12->sizePolicy().hasHeightForWidth());
        checkBox_12->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(checkBox_12, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        checkBox_13 = new QCheckBox(layoutWidget);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        sizePolicy3.setHeightForWidth(checkBox_13->sizePolicy().hasHeightForWidth());
        checkBox_13->setSizePolicy(sizePolicy3);

        horizontalLayout_11->addWidget(checkBox_13);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_12->addWidget(label_13);

        checkBox_14 = new QCheckBox(layoutWidget);
        checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));
        sizePolicy3.setHeightForWidth(checkBox_14->sizePolicy().hasHeightForWidth());
        checkBox_14->setSizePolicy(sizePolicy3);

        horizontalLayout_12->addWidget(checkBox_14);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_13->addWidget(label_14);

        checkBox_15 = new QCheckBox(layoutWidget);
        checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));
        sizePolicy2.setHeightForWidth(checkBox_15->sizePolicy().hasHeightForWidth());
        checkBox_15->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(checkBox_15, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(label_15);

        checkBox_16 = new QCheckBox(layoutWidget);
        checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));
        sizePolicy2.setHeightForWidth(checkBox_16->sizePolicy().hasHeightForWidth());
        checkBox_16->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(checkBox_16, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        horizontalLayout_15->addWidget(label_16);

        checkBox_17 = new QCheckBox(layoutWidget);
        checkBox_17->setObjectName(QString::fromUtf8("checkBox_17"));
        sizePolicy2.setHeightForWidth(checkBox_17->sizePolicy().hasHeightForWidth());
        checkBox_17->setSizePolicy(sizePolicy2);

        horizontalLayout_15->addWidget(checkBox_17, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        horizontalLayout_16->addWidget(label_17);

        checkBox_18 = new QCheckBox(layoutWidget);
        checkBox_18->setObjectName(QString::fromUtf8("checkBox_18"));
        sizePolicy2.setHeightForWidth(checkBox_18->sizePolicy().hasHeightForWidth());
        checkBox_18->setSizePolicy(sizePolicy2);

        horizontalLayout_16->addWidget(checkBox_18, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_16);


        verticalLayout_2->addLayout(verticalLayout);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 2px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 0 8px;\n"
"  background: green;color:white}"));

        verticalLayout_2->addWidget(okButton);


        retranslateUi(topics);

        QMetaObject::connectSlotsByName(topics);
    } // setupUi

    void retranslateUi(QDialog *topics)
    {
        topics->setWindowTitle(QApplication::translate("topics", "Dialog", nullptr));
        label->setText(QApplication::translate("topics", "ALL", nullptr));
        allCheckBox->setText(QString());
        clearButton->setText(QApplication::translate("topics", "CLEAR", nullptr));
        label_1->setText(QApplication::translate("topics", "SACHARIDY", nullptr));
        checkBox_1->setText(QString());
        label_2->setText(QApplication::translate("topics", "LIPIDY", nullptr));
        checkBox_2->setText(QString());
        label_3->setText(QApplication::translate("topics", "AMINOKYSELINY", nullptr));
        checkBox_3->setText(QString());
        label_4->setText(QApplication::translate("topics", "NUKLEOTIDY", nullptr));
        checkBox_4->setText(QString());
        label_5->setText(QApplication::translate("topics", "TETRAPYROLY", nullptr));
        checkBox_5->setText(QString());
        label_6->setText(QApplication::translate("topics", "ACETYLCoA", nullptr));
        checkBox_6->setText(QString());
        label_7->setText(QApplication::translate("topics", "HORMONY", nullptr));
        checkBox_7->setText(QString());
        label_8->setText(QApplication::translate("topics", "REGULACIE", nullptr));
        checkBox_8->setText(QString());
        label_11->setText(QApplication::translate("topics", "NERVOVY SYSTEM", nullptr));
        checkBox_9->setText(QString());
        label_20->setText(QApplication::translate("topics", "PLAZM BIELK.", nullptr));
        checkBox_10->setText(QString());
        label_10->setText(QApplication::translate("topics", "EIKOZANOIDY", nullptr));
        checkBox_11->setText(QString());
        label_9->setText(QApplication::translate("topics", "PECEN", nullptr));
        checkBox_12->setText(QString());
        label_12->setText(QApplication::translate("topics", "MOLEKULOVA BIOL", nullptr));
        checkBox_13->setText(QString());
        label_13->setText(QApplication::translate("topics", "TRAVENIE", nullptr));
        checkBox_14->setText(QString());
        label_14->setText(QApplication::translate("topics", "VODA", nullptr));
        checkBox_15->setText(QString());
        label_15->setText(QApplication::translate("topics", "ENZYMY", nullptr));
        checkBox_16->setText(QString());
        label_16->setText(QApplication::translate("topics", "ABR", nullptr));
        checkBox_17->setText(QString());
        label_17->setText(QApplication::translate("topics", "PLAZM BIELK.", nullptr));
        checkBox_18->setText(QString());
        okButton->setText(QApplication::translate("topics", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class topics: public Ui_topics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPICS_H
