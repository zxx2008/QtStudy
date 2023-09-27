#pragma once

#include <QObject>
#include <QString>

class Student : public QObject {
	Q_OBJECT;
public:
	Student(QObject* parent);
	~Student();

signals:

public slots:
	void treat();
	void treat(QString str);
};