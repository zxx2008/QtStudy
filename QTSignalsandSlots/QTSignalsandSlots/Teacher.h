#pragma once

#include <QObject>

class Teacher : public QObject {
	Q_OBJECT;
public:
	Teacher(QObject* parent);
	~Teacher();
signals:
	//Teacher �źţ�����
	void hungery();
};
