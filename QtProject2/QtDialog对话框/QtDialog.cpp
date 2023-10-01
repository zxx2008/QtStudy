#include "QtDialog.h"
#include <QDialog>
QtDialog::QtDialog(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //点击 new 打开非模态对话框
    connect(ui.actionnew, &QAction::triggered, [this]() { QDialog* dlg = new QDialog(this); dlg->resize(200, 150); dlg->setAttribute(Qt::WA_DeleteOnClose);  dlg->show(); });
    //点击 open 打开模态对话框
    connect(ui.actionopen, &QAction::triggered, [this]() { QDialog* dlg2 = new QDialog(this); dlg2->resize(200, 130); dlg2->setAttribute(Qt::WA_DeleteOnClose); dlg2->exec(); });
}
