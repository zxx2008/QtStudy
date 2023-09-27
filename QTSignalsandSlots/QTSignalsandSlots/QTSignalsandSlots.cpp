#include "QTSignalsandSlots.h"

QTSignalsandSlots::QTSignalsandSlots(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    teacher = new Teacher(this);
    student = new Student(this);
}

void QTSignalsandSlots::classOver() {
    connect(teacher, &Teacher::hungery, student, &Student::treat);
    emit teacher->hungery();
}

