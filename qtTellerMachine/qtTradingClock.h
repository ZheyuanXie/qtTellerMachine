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
	QTimeZone timezone;

private:
	Ui::qtTradingClock ui;

private slots:
	void tick();
};
