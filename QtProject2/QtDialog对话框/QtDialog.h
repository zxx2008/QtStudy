#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtDialog.h"

class QtDialog : public QMainWindow
{
    Q_OBJECT

public:
    QtDialog(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtDialogClass ui;
};
