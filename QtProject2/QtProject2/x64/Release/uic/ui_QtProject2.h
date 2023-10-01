/********************************************************************************
** Form generated from reading UI file 'QtProject2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROJECT2_H
#define UI_QTPROJECT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtProject2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtProject2Class)
    {
        if (QtProject2Class->objectName().isEmpty())
            QtProject2Class->setObjectName(QString::fromUtf8("QtProject2Class"));
        QtProject2Class->resize(600, 400);
        menuBar = new QMenuBar(QtProject2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtProject2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtProject2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtProject2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtProject2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtProject2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtProject2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtProject2Class->setStatusBar(statusBar);

        retranslateUi(QtProject2Class);

        QMetaObject::connectSlotsByName(QtProject2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtProject2Class)
    {
        QtProject2Class->setWindowTitle(QCoreApplication::translate("QtProject2Class", "QtProject2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtProject2Class: public Ui_QtProject2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROJECT2_H
