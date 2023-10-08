#include "TimeObject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimeObject w;
    w.show();
    return a.exec();
}
