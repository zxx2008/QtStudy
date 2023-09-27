#include "QTSignalsandSlots.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTSignalsandSlots w;
    w.show();
    //w.classOver();
    return a.exec();
}
