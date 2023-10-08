#include "myLabel.h"
#include <QDebug>

myLabel::myLabel(QWidget* parent) : QLabel(parent) {}

void myLabel::enterEvent(QEvent* event) {
	qDebug() << "mouse in";
}

void myLabel::leaveEvent(QEvent* event) {
	qDebug() << "mouse out";
}