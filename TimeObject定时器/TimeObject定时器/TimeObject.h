#pragma once

#include <QtWidgets/QWidget>
#include "ui_TimeObject.h"

class TimeObject : public QWidget
{
    Q_OBJECT

public:
    TimeObject(QWidget *parent = Q_NULLPTR);
    //��д��ʱ���¼�
    void timerEvent(QTimerEvent* ev);
private:
    Ui::TimeObjectClass ui;
    int id1; //��ʱ��1��Ψһ��ʶ
    int id2; //��ʱ��2��Ψһ��ʶ
};
