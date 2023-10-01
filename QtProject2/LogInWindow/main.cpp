#include "LogInWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInWindow w;
    w.show();
    return a.exec();
}
