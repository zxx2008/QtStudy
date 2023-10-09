#pragma once

#include <QtWidgets/QWidget>
#include "ui_TimeObject.h"

class TimeObject : public QWidget
{
    Q_OBJECT

public:
    TimeObject(QWidget *parent = Q_NULLPTR);
    //重写定时器事件
    void timerEvent(QTimerEvent* ev);
private:
    Ui::TimeObjectClass ui;
    int id1; //定时器1的唯一标识
    int id2; //定时器2的唯一标识
};
