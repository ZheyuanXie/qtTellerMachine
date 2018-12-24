#include "qtTradingClock.h"
#include <QTimer>
#include <QTime>
#include <QTimeZone>
#include <QLocale>
#include <QDebug>

qtTradingClock::qtTradingClock(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QTimeZone timezone = QTimeZone::QTimeZone(8);

	QTimer *timer = new QTimer(this);
	connect(timer, &QTimer::timeout, this, &qtTradingClock::tick);
	timer->start(1000);
}

qtTradingClock::~qtTradingClock()
{

}

void qtTradingClock::tick()
{
	QDateTime datetime = QDateTime::currentDateTime();
	QTimeZone timezone = QTimeZone::QTimeZone(28800);
	QString text = datetime.toTimeZone(timezone).toString("hh:mm:ss");
	ui.lcdnumber->display(text);
}