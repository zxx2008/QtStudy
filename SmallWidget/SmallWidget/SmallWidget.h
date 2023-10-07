#pragma once

#include <QtWidgets/QWidget>
#include "ui_SmallWidget.h"

class SmallWidget : public QWidget
{
    Q_OBJECT

public:
    SmallWidget(QWidget *parent = Q_NULLPTR);

private:
    Ui::SmallWidgetClass ui;
};
