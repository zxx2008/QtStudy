/********************************************************************************
** Form generated from reading UI file 'MouseEvent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEEVENT_H
#define UI_MOUSEEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_MouseEventClass
{
public:
    myLabel *label;

    void setupUi(QWidget *MouseEventClass)
    {
        if (MouseEventClass->objectName().isEmpty())
            MouseEventClass->setObjectName(QStringLiteral("MouseEventClass"));
        MouseEventClass->resize(600, 400);
        label = new myLabel(MouseEventClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 100, 291, 141));
        label->setFrameShape(QFrame::Box);

        retranslateUi(MouseEventClass);

        QMetaObject::connectSlotsByName(MouseEventClass);
    } // setupUi

    void retranslateUi(QWidget *MouseEventClass)
    {
        MouseEventClass->setWindowTitle(QApplication::translate("MouseEventClass", "MouseEvent", Q_NULLPTR));
        label->setText(QApplication::translate("MouseEventClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MouseEventClass: public Ui_MouseEventClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSEEVENT_H
