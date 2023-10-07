#include "SmallWidget.h"
#include <QDebug>

SmallWidget::SmallWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    //点击按钮，值设置为50
    connect(ui.setHalf, &QPushButton::clicked, ui.widget, [this]() {
        ui.widget->setValue(50);
        });
    //点击按钮，返回当前值
    connect(ui.getNum, &QPushButton::clicked, ui.widget, [this]() {
        qDebug() << ui.widget->getValue();
        });
}
