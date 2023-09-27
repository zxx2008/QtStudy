#include "QTSignalsandSlots.h"

QTSignalsandSlots::QTSignalsandSlots(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    teacher = new Teacher(this);
    student = new Student(this);
    connect(ui.pushButton, &QPushButton::clicked, this, &QTSignalsandSlots::classOver);  // 通过ui找不到新添加的控件，就在ui文件右键编译，项目右键重新扫描解决方案
}

void QTSignalsandSlots::classOver() {
    //带参信号与槽的连接方式
    void(Teacher:: * teacherSignal)(QString) = &Teacher::hungery;
    void(Student:: * studentSlot)(QString) = &Student::treat;
    connect(teacher, teacherSignal, student, studentSlot);
    //disconnect(teacher, teacherSignal, student, studentSlot);
    emit teacher->hungery("chicken");
    disconnect(teacher, teacherSignal, student, studentSlot); //断开链接，不断开如果循环调用classover会产生一大堆链接，执行很多次槽函数
}

