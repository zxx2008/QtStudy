#include "Student.h"
#include <QDebug>

Student::Student(QObject* parent) : QObject(parent) {}

Student::~Student() {}

void Student::treat() {
	qDebug() << "Invite the teacher to dinner.";
}

