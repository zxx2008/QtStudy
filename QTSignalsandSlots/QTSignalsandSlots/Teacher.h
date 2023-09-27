#pragma once

#include <QObject>
#include <QString>

class Teacher : public QObject {
	Q_OBJECT;
public:
	Teacher(QObject* parent);
	~Teacher();
signals:
	//Teacher ÐÅºÅ£¬¶öÁË
	void hungery();
	void hungery(QString str);
};
