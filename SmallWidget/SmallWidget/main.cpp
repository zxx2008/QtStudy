#include "SmallWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmallWidget w;
    w.show();
    return a.exec();
}
