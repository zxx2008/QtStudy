/********************************************************************************
** Form generated from reading UI file 'QTSignalsandSlots.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSIGNALSANDSLOTS_H
#define UI_QTSIGNALSANDSLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTSignalsandSlotsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTSignalsandSlotsClass)
    {
        if (QTSignalsandSlotsClass->objectName().isEmpty())
            QTSignalsandSlotsClass->setObjectName(QString::fromUtf8("QTSignalsandSlotsClass"));
        QTSignalsandSlotsClass->resize(600, 400);
        menuBar = new QMenuBar(QTSignalsandSlotsClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QTSignalsandSlotsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTSignalsandSlotsClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QTSignalsandSlotsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QTSignalsandSlotsClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QTSignalsandSlotsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTSignalsandSlotsClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QTSignalsandSlotsClass->setStatusBar(statusBar);

        retranslateUi(QTSignalsandSlotsClass);

        QMetaObject::connectSlotsByName(QTSignalsandSlotsClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTSignalsandSlotsClass)
    {
        QTSignalsandSlotsClass->setWindowTitle(QCoreApplication::translate("QTSignalsandSlotsClass", "QTSignalsandSlots", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTSignalsandSlotsClass: public Ui_QTSignalsandSlotsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSIGNALSANDSLOTS_H
