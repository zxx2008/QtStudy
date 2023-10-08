#pragma once
#include <QLabel>

class myLabel : public QLabel {
	Q_OBJECT;

public:
	explicit myLabel(QWidget* parent = 0);

	//鼠标进入事件
	void enterEvent(QEvent* event);
	//鼠标离开事件
	void leaveEvent(QEvent* event);
	//鼠标点击事件
	void mousePressEvent(QMouseEvent* ev);
	//鼠标释放事件
	void mouseReleaseEvent(QMouseEvent* ev);
	//鼠标移动事件
	void mouseMoveEvent(QMouseEvent* ev);
};