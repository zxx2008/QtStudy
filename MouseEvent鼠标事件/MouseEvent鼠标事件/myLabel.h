#pragma once
#include <QLabel>

class myLabel : public QLabel {
	Q_OBJECT;

public:
	explicit myLabel(QWidget* parent = 0);

	//�������¼�
	void enterEvent(QEvent* event);
	//����뿪�¼�
	void leaveEvent(QEvent* event);
};