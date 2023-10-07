#pragma once

#include <QWidget>
#include "ui_MyWidget.h"

class MyWidget : public QWidget
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent = Q_NULLPTR);
	~MyWidget();
	int getValue();
	void setValue(int i);

private:
	Ui::MyWidget ui;
};
