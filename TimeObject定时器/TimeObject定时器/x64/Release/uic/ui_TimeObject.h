/********************************************************************************
** Form generated from reading UI file 'TimeObject.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEOBJECT_H
#define UI_TIMEOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeObjectClass
{
public:

    void setupUi(QWidget *TimeObjectClass)
    {
        if (TimeObjectClass->objectName().isEmpty())
            TimeObjectClass->setObjectName(QString::fromUtf8("TimeObjectClass"));
        TimeObjectClass->resize(600, 400);

        retranslateUi(TimeObjectClass);

        QMetaObject::connectSlotsByName(TimeObjectClass);
    } // setupUi

    void retranslateUi(QWidget *TimeObjectClass)
    {
        TimeObjectClass->setWindowTitle(QCoreApplication::translate("TimeObjectClass", "TimeObject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeObjectClass: public Ui_TimeObjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEOBJECT_H
