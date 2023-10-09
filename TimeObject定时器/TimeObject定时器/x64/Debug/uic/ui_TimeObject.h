/********************************************************************************
** Form generated from reading UI file 'TimeObject.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEOBJECT_H
#define UI_TIMEOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_TimeObjectClass
{
public:
    myLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *TimeObjectClass)
    {
        if (TimeObjectClass->objectName().isEmpty())
            TimeObjectClass->setObjectName(QStringLiteral("TimeObjectClass"));
        TimeObjectClass->resize(600, 400);
        label = new myLabel(TimeObjectClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 301, 51));
        label->setFrameShape(QFrame::Box);
        label_2 = new QLabel(TimeObjectClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 120, 301, 51));
        label_2->setFrameShape(QFrame::Box);
        label_3 = new QLabel(TimeObjectClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 220, 291, 51));
        label_3->setFrameShape(QFrame::Box);

        retranslateUi(TimeObjectClass);

        QMetaObject::connectSlotsByName(TimeObjectClass);
    } // setupUi

    void retranslateUi(QWidget *TimeObjectClass)
    {
        TimeObjectClass->setWindowTitle(QApplication::translate("TimeObjectClass", "TimeObject", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TimeObjectClass: public Ui_TimeObjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEOBJECT_H
