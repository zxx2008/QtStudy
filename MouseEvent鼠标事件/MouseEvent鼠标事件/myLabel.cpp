#include "myLabel.h"
#include <QDebug>
#include <QMouseEvent>

myLabel::myLabel(QWidget* parent) : QLabel(parent) { setMouseTracking(true);} // 设置鼠标追踪，不用按下鼠标左键也可以捕捉鼠标移动

void myLabel::enterEvent(QEvent* event) {
	qDebug() << "mouse in";
}

void myLabel::leaveEvent(QEvent* event) {
	qDebug() << "mouse out";
}

void myLabel::mousePressEvent(QMouseEvent* ev) {
	//点击鼠标左键，输出当前鼠标的位置
	if (ev->buttons() & Qt::LeftButton) {
		QString str = QString("mouse is Pressed, x = %1, y = %2").arg(ev->x()).arg(ev->y());
		qDebug() << str;
	}
}

void myLabel::mouseReleaseEvent(QMouseEvent* ev) {
	//释放鼠标右键，输出当前鼠标的位置
	if (ev->buttons() & Qt::LeftButton) {
		QString str = QString("mouse is released, x = %1, y = %2").arg(ev->x()).arg(ev->y());
		qDebug() << str;
	}
}

void myLabel::mouseMoveEvent(QMouseEvent* ev) {
	QString str = QString("mouse is on x = %1, y = %2").arg(ev->x()).arg(ev->y());
	qDebug() << str;
}