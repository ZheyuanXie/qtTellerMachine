#pragma once

#include <QWidget>
#include <QTimezone>
#include "ui_qtTradingClock.h"

class qtTradingClock : public QWidget
{
	Q_OBJECT

public:
	qtTradingClock(QWidget *parent = Q_NULLPTR);
	~qtTradingClock();

protected:
	void mousePressEvent(QMouseEvent *evt);
	void mouseMoveEvent(QMouseEvent *evt);
	
private:
	Ui::qtTradingClock ui;
	QPoint oldPos;

private slots:
	void tick();
};
