#include "myLabel.h"
#include <QDebug>
#include <QMouseEvent>

myLabel::myLabel(QWidget* parent) : QLabel(parent) { setMouseTracking(true);} // �������׷�٣����ð���������Ҳ���Բ�׽����ƶ�

void myLabel::enterEvent(QEvent* event) {
	qDebug() << "mouse in";
}

void myLabel::leaveEvent(QEvent* event) {
	qDebug() << "mouse out";
}

void myLabel::mousePressEvent(QMouseEvent* ev) {
	//����������������ǰ����λ��
	if (ev->buttons() & Qt::LeftButton) {
		QString str = QString("mouse is Pressed, x = %1, y = %2").arg(ev->x()).arg(ev->y());
		qDebug() << str;
	}
}

void myLabel::mouseReleaseEvent(QMouseEvent* ev) {
	//�ͷ�����Ҽ��������ǰ����λ��
	if (ev->buttons() & Qt::LeftButton) {
		QString str = QString("mouse is released, x = %1, y = %2").arg(ev->x()).arg(ev->y());
		qDebug() << str;
	}
}

void myLabel::mouseMoveEvent(QMouseEvent* ev) {
	QString str = QString("mouse is on x = %1, y = %2").arg(ev->x()).arg(ev->y());
	qDebug() << str;
}