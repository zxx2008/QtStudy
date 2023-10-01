#include "QtProject2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtProject2 w;
    w.show();
    return a.exec();
}
