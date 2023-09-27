#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTSignalsandSlots.h"
#include "Teacher.h"
#include "Student.h"

class QTSignalsandSlots : public QMainWindow
{
    Q_OBJECT

public:
    QTSignalsandSlots(QWidget *parent = Q_NULLPTR);
    void classOver();

private:
    Ui::QTSignalsandSlotsClass ui;
    Student* student;
    Teacher* teacher;
};
