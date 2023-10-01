/********************************************************************************
** Form generated from reading UI file 'QtProject2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROJECT2_H
#define UI_QTPROJECT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
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
            QtProject2Class->setObjectName(QStringLiteral("QtProject2Class"));
        QtProject2Class->resize(600, 400);
        actionnew = new QAction(QtProject2Class);
        actionnew->setObjectName(QStringLiteral("actionnew"));
        QIcon icon;
        icon.addFile(QStringLiteral("Images/NEW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew->setIcon(icon);
        actionopen = new QAction(QtProject2Class);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        centralWidget = new QWidget(QtProject2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 381, 291));
        QtProject2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtProject2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menueditor = new QMenu(menuBar);
        menueditor->setObjectName(QStringLiteral("menueditor"));
        QtProject2Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtProject2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtProject2Class->setStatusBar(statusBar);
        toolBar = new QToolBar(QtProject2Class);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QtProject2Class->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(QtProject2Class);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        QtProject2Class->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

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
        QtProject2Class->setWindowTitle(QApplication::translate("QtProject2Class", "QtProject2", Q_NULLPTR));
        actionnew->setText(QApplication::translate("QtProject2Class", "new", Q_NULLPTR));
        actionopen->setText(QApplication::translate("QtProject2Class", "open", Q_NULLPTR));
        menu->setTitle(QApplication::translate("QtProject2Class", "file", Q_NULLPTR));
        menueditor->setTitle(QApplication::translate("QtProject2Class", "editor", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("QtProject2Class", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtProject2Class: public Ui_QtProject2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROJECT2_H
