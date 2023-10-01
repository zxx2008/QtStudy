#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtProject2.h"

class QtProject2 : public QMainWindow
{
    Q_OBJECT

public:
    QtProject2(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtProject2Class ui;
};
