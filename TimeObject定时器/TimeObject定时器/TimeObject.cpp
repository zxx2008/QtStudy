#include "TimeObject.h"
#include <QTimer>

TimeObject::TimeObject(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    //启动定时器
    //定时器每隔一秒+1
    id1 = startTimer(1000);
    //定时器每隔两秒+1
    id2 = startTimer(2000);

    //定时器的第二种方式
    QTimer* timer3 = new QTimer(this);
    //每隔0.5秒发送一个信号
    timer3->start(500);
    connect(timer3, &QTimer::timeout, [=]() {
        static int num3 = 0;
        ui.label_3->setText(QString::number(num3++));
        });
}

void TimeObject::timerEvent(QTimerEvent* ev) {
    // int num = 0; 
    //ui.label->setText(QString::number(num++));

    if (ev->timerId() == id1) {
        static int num = 0;
        ui.label->setText(QString::number(num++));
    }
    else if (ev->timerId() == id2) {
        static int num2 = 0;
        ui.label_2->setText(QString::number(num2++));
    }
}