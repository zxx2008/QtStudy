/********************************************************************************
** Form generated from reading UI file 'QtDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOG_H
#define UI_QTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDialogClass
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menunew;
    QMenu *menueditor;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtDialogClass)
    {
        if (QtDialogClass->objectName().isEmpty())
            QtDialogClass->setObjectName(QStringLiteral("QtDialogClass"));
        QtDialogClass->resize(600, 400);
        actionnew = new QAction(QtDialogClass);
        actionnew->setObjectName(QStringLiteral("actionnew"));
        actionopen = new QAction(QtDialogClass);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        centralWidget = new QWidget(QtDialogClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtDialogClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtDialogClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menunew = new QMenu(menuBar);
        menunew->setObjectName(QStringLiteral("menunew"));
        menueditor = new QMenu(menuBar);
        menueditor->setObjectName(QStringLiteral("menueditor"));
        QtDialogClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtDialogClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtDialogClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtDialogClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtDialogClass->setStatusBar(statusBar);

        menuBar->addAction(menunew->menuAction());
        menuBar->addAction(menueditor->menuAction());
        menunew->addAction(actionnew);
        menunew->addAction(actionopen);

        retranslateUi(QtDialogClass);

        QMetaObject::connectSlotsByName(QtDialogClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtDialogClass)
    {
        QtDialogClass->setWindowTitle(QApplication::translate("QtDialogClass", "QtDialog", Q_NULLPTR));
        actionnew->setText(QApplication::translate("QtDialogClass", "new", Q_NULLPTR));
        actionopen->setText(QApplication::translate("QtDialogClass", "open", Q_NULLPTR));
        menunew->setTitle(QApplication::translate("QtDialogClass", "file", Q_NULLPTR));
        menueditor->setTitle(QApplication::translate("QtDialogClass", "editor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtDialogClass: public Ui_QtDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOG_H
