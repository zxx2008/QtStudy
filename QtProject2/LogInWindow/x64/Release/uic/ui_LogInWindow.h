/********************************************************************************
** Form generated from reading UI file 'LogInWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LogInWindowClass)
    {
        if (LogInWindowClass->objectName().isEmpty())
            LogInWindowClass->setObjectName(QStringLiteral("LogInWindowClass"));
        LogInWindowClass->resize(600, 400);
        menuBar = new QMenuBar(LogInWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LogInWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LogInWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LogInWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LogInWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LogInWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LogInWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LogInWindowClass->setStatusBar(statusBar);

        retranslateUi(LogInWindowClass);

        QMetaObject::connectSlotsByName(LogInWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *LogInWindowClass)
    {
        LogInWindowClass->setWindowTitle(QApplication::translate("LogInWindowClass", "LogInWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogInWindowClass: public Ui_LogInWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
