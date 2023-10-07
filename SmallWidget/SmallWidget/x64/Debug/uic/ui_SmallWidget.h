/********************************************************************************
** Form generated from reading UI file 'SmallWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLWIDGET_H
#define UI_SMALLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mywidget.h"

QT_BEGIN_NAMESPACE

class Ui_SmallWidgetClass
{
public:
    MyWidget *widget;
    QPushButton *setHalf;
    QPushButton *getNum;

    void setupUi(QWidget *SmallWidgetClass)
    {
        if (SmallWidgetClass->objectName().isEmpty())
            SmallWidgetClass->setObjectName(QStringLiteral("SmallWidgetClass"));
        SmallWidgetClass->resize(600, 400);
        widget = new MyWidget(SmallWidgetClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 70, 341, 81));
        setHalf = new QPushButton(SmallWidgetClass);
        setHalf->setObjectName(QStringLiteral("setHalf"));
        setHalf->setGeometry(QRect(90, 180, 75, 23));
        getNum = new QPushButton(SmallWidgetClass);
        getNum->setObjectName(QStringLiteral("getNum"));
        getNum->setGeometry(QRect(190, 180, 75, 23));

        retranslateUi(SmallWidgetClass);

        QMetaObject::connectSlotsByName(SmallWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *SmallWidgetClass)
    {
        SmallWidgetClass->setWindowTitle(QApplication::translate("SmallWidgetClass", "SmallWidget", Q_NULLPTR));
        setHalf->setText(QApplication::translate("SmallWidgetClass", "setHalf", Q_NULLPTR));
        getNum->setText(QApplication::translate("SmallWidgetClass", "getNum", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SmallWidgetClass: public Ui_SmallWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLWIDGET_H
