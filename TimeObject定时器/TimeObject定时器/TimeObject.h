#pragma once

#include <QtWidgets/QWidget>
#include "ui_TimeObject.h"

class TimeObject : public QWidget
{
    Q_OBJECT

public:
    TimeObject(QWidget *parent = Q_NULLPTR);

private:
    Ui::TimeObjectClass ui;
};
