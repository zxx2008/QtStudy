#include "SmallWidget.h"
#include <QDebug>

SmallWidget::SmallWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    //�����ť��ֵ����Ϊ50
    connect(ui.setHalf, &QPushButton::clicked, ui.widget, [this]() {
        ui.widget->setValue(50);
        });
    //�����ť�����ص�ǰֵ
    connect(ui.getNum, &QPushButton::clicked, ui.widget, [this]() {
        qDebug() << ui.widget->getValue();
        });
}
