/********************************************************************************
** Form generated from reading UI file 'questiongenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONGENERATOR_H
#define UI_QUESTIONGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionGenerator
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *answerButton_1;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *answerButton_2;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *answerButton_3;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *answerButton_4;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *answerButton_5;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *answerButton_6;
    QCheckBox *checkBox_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *answerButton_7;
    QCheckBox *checkBox_7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *answerButton_8;
    QCheckBox *checkBox_8;
    QPushButton *check;
    QWidget *widget_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *loadDefault;
    QPushButton *chooseTopicsButton;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_24;
    QHBoxLayout *horizontalLayout_23;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QSpinBox *minSpinBox;
    QLabel *label_10;
    QSpinBox *maxSpinBox;
    QCheckBox *sequential;
    QPushButton *showAnswersButton;
    QPushButton *generate;
    QPushButton *prevButton;
    QHBoxLayout *horizontalLayout_22;
    QLCDNumber *score;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_8;
    QWidget *tab_4;
    QPushButton *clear;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_11;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QTextEdit *textEditWrongAnswers;

    void setupUi(QDialog *QuestionGenerator)
    {
        if (QuestionGenerator->objectName().isEmpty())
            QuestionGenerator->setObjectName(QString::fromUtf8("QuestionGenerator"));
        QuestionGenerator->resize(746, 754);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QuestionGenerator->sizePolicy().hasHeightForWidth());
        QuestionGenerator->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(8);
        QuestionGenerator->setFont(font);
        gridLayout = new QGridLayout(QuestionGenerator);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(QuestionGenerator);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, -20, 721, 1051));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 200, 688, 531));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(591, 381));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        answerButton_1 = new QPushButton(frame);
        answerButton_1->setObjectName(QString::fromUtf8("answerButton_1"));
        sizePolicy1.setHeightForWidth(answerButton_1->sizePolicy().hasHeightForWidth());
        answerButton_1->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(answerButton_1);

        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy2);
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}\n"
""));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        answerButton_2 = new QPushButton(frame);
        answerButton_2->setObjectName(QString::fromUtf8("answerButton_2"));
        sizePolicy1.setHeightForWidth(answerButton_2->sizePolicy().hasHeightForWidth());
        answerButton_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(answerButton_2);

        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy2.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy2);
        checkBox_2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}"));

        horizontalLayout_2->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        answerButton_3 = new QPushButton(frame);
        answerButton_3->setObjectName(QString::fromUtf8("answerButton_3"));
        sizePolicy1.setHeightForWidth(answerButton_3->sizePolicy().hasHeightForWidth());
        answerButton_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(answerButton_3);

        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        sizePolicy2.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy2);
        checkBox_3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}"));
        checkBox_3->setIconSize(QSize(27, 19));

        horizontalLayout_3->addWidget(checkBox_3, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        answerButton_4 = new QPushButton(frame);
        answerButton_4->setObjectName(QString::fromUtf8("answerButton_4"));
        sizePolicy1.setHeightForWidth(answerButton_4->sizePolicy().hasHeightForWidth());
        answerButton_4->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(answerButton_4);

        checkBox_4 = new QCheckBox(frame);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        sizePolicy2.setHeightForWidth(checkBox_4->sizePolicy().hasHeightForWidth());
        checkBox_4->setSizePolicy(sizePolicy2);
        checkBox_4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}"));

        horizontalLayout_4->addWidget(checkBox_4, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        answerButton_5 = new QPushButton(frame);
        answerButton_5->setObjectName(QString::fromUtf8("answerButton_5"));
        sizePolicy1.setHeightForWidth(answerButton_5->sizePolicy().hasHeightForWidth());
        answerButton_5->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(answerButton_5);

        checkBox_5 = new QCheckBox(frame);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}"));

        horizontalLayout_5->addWidget(checkBox_5, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        answerButton_6 = new QPushButton(frame);
        answerButton_6->setObjectName(QString::fromUtf8("answerButton_6"));
        sizePolicy1.setHeightForWidth(answerButton_6->sizePolicy().hasHeightForWidth());
        answerButton_6->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(answerButton_6);

        checkBox_6 = new QCheckBox(frame);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}"));

        horizontalLayout_6->addWidget(checkBox_6, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        answerButton_7 = new QPushButton(frame);
        answerButton_7->setObjectName(QString::fromUtf8("answerButton_7"));
        sizePolicy1.setHeightForWidth(answerButton_7->sizePolicy().hasHeightForWidth());
        answerButton_7->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(answerButton_7);

        checkBox_7 = new QCheckBox(frame);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}"));

        horizontalLayout_7->addWidget(checkBox_7, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        answerButton_8 = new QPushButton(frame);
        answerButton_8->setObjectName(QString::fromUtf8("answerButton_8"));
        sizePolicy1.setHeightForWidth(answerButton_8->sizePolicy().hasHeightForWidth());
        answerButton_8->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(answerButton_8);

        checkBox_8 = new QCheckBox(frame);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        sizePolicy2.setHeightForWidth(checkBox_8->sizePolicy().hasHeightForWidth());
        checkBox_8->setSizePolicy(sizePolicy2);
        checkBox_8->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width: 25px;     height: 25px;}"));

        horizontalLayout_8->addWidget(checkBox_8, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_12->addLayout(verticalLayout);


        horizontalLayout_9->addWidget(frame);

        check = new QPushButton(layoutWidget);
        check->setObjectName(QString::fromUtf8("check"));
        check->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(check->sizePolicy().hasHeightForWidth());
        check->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        check->setFont(font1);
        check->setStyleSheet(QString::fromUtf8("QPushButton {background:rgb(102, 255, 204)}"));

        horizontalLayout_9->addWidget(check);

        widget_3 = new QWidget(groupBox_3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(320, 20, 201, 45));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 30, 691, 173));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        loadDefault = new QPushButton(layoutWidget1);
        loadDefault->setObjectName(QString::fromUtf8("loadDefault"));

        horizontalLayout_11->addWidget(loadDefault);

        chooseTopicsButton = new QPushButton(layoutWidget1);
        chooseTopicsButton->setObjectName(QString::fromUtf8("chooseTopicsButton"));
        chooseTopicsButton->setEnabled(false);

        horizontalLayout_11->addWidget(chooseTopicsButton);


        verticalLayout_2->addLayout(horizontalLayout_11);

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font2;
        font2.setPointSize(12);
        textEdit->setFont(font2);
        textEdit->setToolTipDuration(7);
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        widget_2 = new QWidget(layoutWidget1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_13 = new QHBoxLayout(widget_2);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_13->addWidget(label_9);

        minSpinBox = new QSpinBox(widget_2);
        minSpinBox->setObjectName(QString::fromUtf8("minSpinBox"));
        minSpinBox->setMinimum(1);
        minSpinBox->setMaximum(983);

        horizontalLayout_13->addWidget(minSpinBox);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_13->addWidget(label_10);

        maxSpinBox = new QSpinBox(widget_2);
        maxSpinBox->setObjectName(QString::fromUtf8("maxSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(maxSpinBox->sizePolicy().hasHeightForWidth());
        maxSpinBox->setSizePolicy(sizePolicy4);
        maxSpinBox->setMinimum(1);
        maxSpinBox->setMaximum(984);
        maxSpinBox->setValue(984);

        horizontalLayout_13->addWidget(maxSpinBox);


        horizontalLayout_23->addWidget(widget_2);

        sequential = new QCheckBox(layoutWidget1);
        sequential->setObjectName(QString::fromUtf8("sequential"));
        sequential->setFocusPolicy(Qt::ClickFocus);
        sequential->setToolTipDuration(2);

        horizontalLayout_23->addWidget(sequential);


        horizontalLayout_24->addLayout(horizontalLayout_23);

        showAnswersButton = new QPushButton(layoutWidget1);
        showAnswersButton->setObjectName(QString::fromUtf8("showAnswersButton"));
        showAnswersButton->setEnabled(false);

        horizontalLayout_24->addWidget(showAnswersButton);

        generate = new QPushButton(layoutWidget1);
        generate->setObjectName(QString::fromUtf8("generate"));
        generate->setEnabled(false);
        generate->setCheckable(false);

        horizontalLayout_24->addWidget(generate);

        prevButton = new QPushButton(layoutWidget1);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));
        prevButton->setEnabled(false);

        horizontalLayout_24->addWidget(prevButton);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        score = new QLCDNumber(layoutWidget1);
        score->setObjectName(QString::fromUtf8("score"));
        score->setFrameShape(QFrame::Box);
        score->setFrameShadow(QFrame::Sunken);
        score->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_22->addWidget(score);


        horizontalLayout_24->addLayout(horizontalLayout_22);


        verticalLayout_2->addLayout(horizontalLayout_24);

        horizontalLayoutWidget = new QWidget(tab_3);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(770, 120, 160, 80));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        label->setMouseTracking(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_14->addWidget(label);

        horizontalLayoutWidget_2 = new QWidget(tab_3);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(770, 220, 160, 80));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setMouseTracking(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_15->addWidget(label_2);

        horizontalLayoutWidget_3 = new QWidget(tab_3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(770, 320, 160, 80));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setMouseTracking(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);
        label_3->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_16->addWidget(label_3);

        horizontalLayoutWidget_4 = new QWidget(tab_3);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(760, 420, 160, 80));
        horizontalLayout_17 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setMouseTracking(true);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        label_4->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_17->addWidget(label_4);

        horizontalLayoutWidget_5 = new QWidget(tab_3);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(760, 520, 160, 80));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);
        label_5->setMouseTracking(true);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);
        label_5->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_18->addWidget(label_5);

        horizontalLayoutWidget_6 = new QWidget(tab_3);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(760, 610, 160, 80));
        horizontalLayout_19 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setMouseTracking(true);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);
        label_6->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_19->addWidget(label_6);

        horizontalLayoutWidget_7 = new QWidget(tab_3);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(760, 700, 160, 51));
        horizontalLayout_20 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_20->setSpacing(0);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy5.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy5);
        label_7->setMouseTracking(true);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(true);
        label_7->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_20->addWidget(label_7);

        horizontalLayoutWidget_8 = new QWidget(tab_3);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(760, 760, 160, 80));
        horizontalLayout_21 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_21->setSpacing(0);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setMouseTracking(true);
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setWordWrap(true);
        label_8->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_21->addWidget(label_8);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        clear = new QPushButton(tab_4);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(20, 730, 121, 31));
        layoutWidget2 = new QWidget(tab_4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 541, 701));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font3;
        font3.setItalic(true);
        font3.setUnderline(true);
        label_11->setFont(font3);

        verticalLayout_3->addWidget(label_11);

        widget = new QWidget(layoutWidget2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        textEditWrongAnswers = new QTextEdit(widget);
        textEditWrongAnswers->setObjectName(QString::fromUtf8("textEditWrongAnswers"));
        textEditWrongAnswers->setReadOnly(true);

        horizontalLayout_10->addWidget(textEditWrongAnswers);


        verticalLayout_3->addWidget(widget);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QuestionGenerator);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QuestionGenerator);
    } // setupUi

    void retranslateUi(QDialog *QuestionGenerator)
    {
        QuestionGenerator->setWindowTitle(QApplication::translate("QuestionGenerator", "Dialog", nullptr));
        groupBox_3->setTitle(QString());
        answerButton_1->setText(QString());
        checkBox->setText(QString());
        answerButton_2->setText(QString());
        checkBox_2->setText(QString());
        answerButton_3->setText(QString());
        checkBox_3->setText(QString());
        answerButton_4->setText(QString());
        checkBox_4->setText(QString());
        answerButton_5->setText(QString());
        checkBox_5->setText(QString());
        answerButton_6->setText(QString());
        checkBox_6->setText(QString());
        answerButton_7->setText(QString());
        checkBox_7->setText(QString());
        answerButton_8->setText(QString());
        checkBox_8->setText(QString());
        check->setText(QApplication::translate("QuestionGenerator", "Check", nullptr));
        loadDefault->setText(QApplication::translate("QuestionGenerator", "Load questions", nullptr));
        chooseTopicsButton->setText(QApplication::translate("QuestionGenerator", "Choose topics", nullptr));
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        textEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("QuestionGenerator", "From", nullptr));
        label_10->setText(QApplication::translate("QuestionGenerator", "To", nullptr));
#ifndef QT_NO_TOOLTIP
        sequential->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        sequential->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        sequential->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        sequential->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sequential->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        sequential->setText(QApplication::translate("QuestionGenerator", "Sequential", nullptr));
        showAnswersButton->setText(QApplication::translate("QuestionGenerator", "Show answers", nullptr));
        generate->setText(QApplication::translate("QuestionGenerator", "Generate/Next", nullptr));
        prevButton->setText(QApplication::translate("QuestionGenerator", "Prev", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QuestionGenerator", "Generator", nullptr));
        clear->setText(QApplication::translate("QuestionGenerator", "CLEAR", nullptr));
        label_11->setText(QApplication::translate("QuestionGenerator", " You marked these as correct", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("QuestionGenerator", "Wrong Answers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionGenerator: public Ui_QuestionGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONGENERATOR_H
