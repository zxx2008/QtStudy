#include "TimeObject.h"
#include <QTimer>

TimeObject::TimeObject(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    //������ʱ��
    //��ʱ��ÿ��һ��+1
    id1 = startTimer(1000);
    //��ʱ��ÿ������+1
    id2 = startTimer(2000);

    //��ʱ���ĵڶ��ַ�ʽ
    QTimer* timer3 = new QTimer(this);
    //ÿ��0.5�뷢��һ���ź�
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