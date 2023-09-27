#include "QTSignalsandSlots.h"

QTSignalsandSlots::QTSignalsandSlots(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    teacher = new Teacher(this);
    student = new Student(this);
    connect(ui.pushButton, &QPushButton::clicked, this, &QTSignalsandSlots::classOver);  // ͨ��ui�Ҳ�������ӵĿؼ�������ui�ļ��Ҽ����룬��Ŀ�Ҽ�����ɨ��������
}

void QTSignalsandSlots::classOver() {
    //�����ź���۵����ӷ�ʽ
    void(Teacher:: * teacherSignal)(QString) = &Teacher::hungery;
    void(Student:: * studentSlot)(QString) = &Student::treat;
    connect(teacher, teacherSignal, student, studentSlot);
    //disconnect(teacher, teacherSignal, student, studentSlot);
    emit teacher->hungery("chicken");
    disconnect(teacher, teacherSignal, student, studentSlot); //�Ͽ����ӣ����Ͽ����ѭ������classover�����һ������ӣ�ִ�кܶ�βۺ���
}

