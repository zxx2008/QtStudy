#pragma once

#include <QObject>

class Student : public QObject {
	Q_OBJECT;
public:
	Student(QObject* parent);
	~Student();

signals:

public slots:
	void treat();
};