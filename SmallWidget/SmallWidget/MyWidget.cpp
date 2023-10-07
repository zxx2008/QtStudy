#include "MyWidget.h"
#include <QSpinBox>
#include <QSlider>

MyWidget::MyWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//�����ź���ۣ�����SpinBox�е���ֵ�������������
	void(QSpinBox:: * spinSignal)(int) = &QSpinBox::valueChanged;
	connect(ui.spinBox, spinSignal, ui.horizontalSlider, &QSlider::setValue);
	//�����ź���ۣ�������������Ļ�����SpinBox��ֵ�ı�
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