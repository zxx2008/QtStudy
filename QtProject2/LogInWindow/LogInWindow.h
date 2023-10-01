#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LogInWindow.h"

class LogInWindow : public QMainWindow
{
    Q_OBJECT

public:
    LogInWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::LogInWindowClass ui;
};
