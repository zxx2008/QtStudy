#include "Teacher.h"
#include <QDebug>

Teacher::Teacher(QObject* parent) : QObject(parent) {}

Teacher::~Teacher() {}

/*void Teacher::hungery() {
	qDebug() << "The teacher is hungery!";
}*/

//信号只需要申明不需要实现！！！！！！！