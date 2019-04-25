TEMPLATE = app
TARGET = Number Generator v2

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QMAKE_CXXFLAGS += /permissive- /W4 /EHsc

SOURCES += \
    main.cpp \
    question.cpp \
    questiongenerator.cpp \
    topics.cpp

FORMS += \
    forms\questiongenerator.ui \
    forms\topics.ui

HEADERS += \
    question.h \
    questiongenerator.h \
    numbergenerator.h \
    topics.h \
    config.h
