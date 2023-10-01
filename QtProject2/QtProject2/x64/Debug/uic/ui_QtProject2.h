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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtProject2Class
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menueditor;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *QtProject2Class)
    {
        if (QtProject2Class->objectName().isEmpty())
            QtProject2Class->setObjectName(QString::fromUtf8("QtProject2Class"));
        QtProject2Class->resize(600, 400);
        actionnew = new QAction(QtProject2Class);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Images/NEW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew->setIcon(icon);
        actionopen = new QAction(QtProject2Class);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        centralWidget = new QWidget(QtProject2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 381, 291));
        QtProject2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtProject2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menueditor = new QMenu(menuBar);
        menueditor->setObjectName(QString::fromUtf8("menueditor"));
        QtProject2Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtProject2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtProject2Class->setStatusBar(statusBar);
        toolBar = new QToolBar(QtProject2Class);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QtProject2Class->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(QtProject2Class);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        QtProject2Class->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menueditor->menuAction());
        menu->addAction(actionnew);
        menu->addSeparator();
        menu->addAction(actionopen);
        toolBar->addAction(actionnew);
        toolBar->addSeparator();
        toolBar->addAction(actionopen);

        retranslateUi(QtProject2Class);

        QMetaObject::connectSlotsByName(QtProject2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtProject2Class)
    {
        QtProject2Class->setWindowTitle(QCoreApplication::translate("QtProject2Class", "QtProject2", nullptr));
        actionnew->setText(QCoreApplication::translate("QtProject2Class", "new", nullptr));
        actionopen->setText(QCoreApplication::translate("QtProject2Class", "open", nullptr));
        menu->setTitle(QCoreApplication::translate("QtProject2Class", "file", nullptr));
        menueditor->setTitle(QCoreApplication::translate("QtProject2Class", "editor", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("QtProject2Class", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtProject2Class: public Ui_QtProject2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROJECT2_H
