#include "Student.h"
#include <QDebug>

Student::Student(QObject* parent) : QObject(parent) {}

Student::~Student() {}

void Student::treat() {
	qDebug() << "Invite the teacher to dinner.";
}

void Student::treat(QString str) {
	qDebug() << "Invite the teacher to" << str.toUtf8().data(); // QString转为char * 就没有双引号了
}