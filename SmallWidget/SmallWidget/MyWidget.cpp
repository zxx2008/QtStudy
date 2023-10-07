#include "MyWidget.h"
#include <QSpinBox>
#include <QSlider>

MyWidget::MyWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//连接信号与槽：调整SpinBox中的数值，滑动组件滑动
	void(QSpinBox:: * spinSignal)(int) = &QSpinBox::valueChanged;
	connect(ui.spinBox, spinSignal, ui.horizontalSlider, &QSlider::setValue);
	//连接信号与槽：调整滑动组件的滑动，SpinBox中值改变
	connect(ui.horizontalSlider, &QSlider::sliderMoved, ui.spinBox, &QSpinBox::setValue);
}

MyWidget::~MyWidget()
{
}

void MyWidget::setValue(int i) {
	ui.spinBox->setValue(i);
}

int MyWidget::getValue() {
	return ui.spinBox->value();
}