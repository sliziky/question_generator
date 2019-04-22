#include "clickablelabel.h"

#include "clickablelabel.h"

clickableLabel::clickableLabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent) {

}

clickableLabel::~clickableLabel() {}

void clickableLabel::mousePressEvent(QMouseEvent* event) {
    emit clicked();
}
