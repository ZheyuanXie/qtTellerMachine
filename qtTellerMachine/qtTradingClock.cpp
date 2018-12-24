#include "qtTradingClock.h"
#include <QTimer>
#include <QTime>
#include <QTimeZone>
#include <QLocale>
#include <QDebug>
#include <QtGui>

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
	// LCD display UTC+8 time
	QTimeZone timezone = QTimeZone::QTimeZone(28800);
	QDateTime datetime = QDateTime::currentDateTime().toTimeZone(timezone);
	QString text = datetime.toTimeZone(timezone).toString("hh:mm:ss");
	ui.lcdnumber->display(text);

	// Trading Session
	QDateTime morning_start = QDateTime::QDateTime(datetime.date(), QTime::QTime(9, 0), timezone);
	QDateTime morning_end = QDateTime::QDateTime(datetime.date(), QTime::QTime(11, 0), timezone);
	QDateTime noon_start = QDateTime::QDateTime(datetime.date(), QTime::QTime(13, 30), timezone);
	QDateTime noon_end = QDateTime::QDateTime(datetime.date(), QTime::QTime(15, 0), timezone);
	QDateTime evening_start = QDateTime::QDateTime(datetime.date(), QTime::QTime(21, 0), timezone);
	QDateTime evening_end = QDateTime::QDateTime(datetime.date(), QTime::QTime(23, 30), timezone);

	if ((datetime.secsTo(morning_start) < 0) && (datetime.secsTo(morning_end) > 0)) {
		qint64 timeelpased = datetime.secsTo(morning_end);
		ui.lb_morning->setText(QString("end in %1h %2m %3s").arg(timeelpased / 3600).arg((timeelpased % 3600) / 60).arg(timeelpased % 60));
		//ui.lb_morning->setText("/");
		ui.lb_noon->setText("/");
		ui.lb_evening->setText("/");
	}
	else if ((datetime.secsTo(morning_end) < 0) && (datetime.secsTo(noon_start) > 0)) {
		qint64 timetogo = datetime.secsTo(noon_start);
		ui.lb_noon->setText(QString("start in %1h %2m %3s").arg(timetogo / 3600).arg((timetogo % 3600) / 60).arg(timetogo % 60));
		ui.lb_morning->setText("/");
		//ui.lb_noon->setText("/");
		ui.lb_evening->setText("/");
	}
	else if (datetime.secsTo(noon_start) < 0 && datetime.secsTo(noon_end) > 0) {
		qint64 timeelpased = datetime.secsTo(noon_end);
		ui.lb_noon->setText(QString("end in %1h %2m %3s").arg(timeelpased / 3600).arg((timeelpased % 3600) / 60).arg(timeelpased % 60));
		ui.lb_morning->setText("/");
		//ui.lb_noon->setText("/");
		ui.lb_evening->setText("/");
	}
	else if (datetime.secsTo(noon_end) < 0 && datetime.secsTo(evening_start) > 0) {
		qint64 timetogo = datetime.secsTo(evening_start);
		ui.lb_noon->setText(QString("start in %1h %2m %3s").arg(timetogo / 3600).arg((timetogo % 3600) / 60).arg(timetogo % 60));
		ui.lb_morning->setText("/");
		ui.lb_noon->setText("/");
		//ui.lb_evening->setText("/");
	}
	else if (datetime.secsTo(evening_start) < 0 && datetime.secsTo(evening_end) > 0) {
		qint64 timeelpased = datetime.secsTo(evening_end);
		ui.lb_evening->setText(QString("end in %1h %2m %3s").arg(timeelpased / 3600).arg((timeelpased % 3600) / 60).arg(timeelpased % 60));
		ui.lb_morning->setText("/");
		ui.lb_noon->setText("/");
		//ui.lb_evening->setText("/");
	}
	else {
		ui.lb_morning->setText("/");
		ui.lb_noon->setText("/");
		ui.lb_evening->setText("/");
	}
}

void qtTradingClock::mousePressEvent(QMouseEvent *evt)
{
	oldPos = evt->globalPos();
}

void qtTradingClock::mouseMoveEvent(QMouseEvent *evt)
{
	const QPoint delta = evt->globalPos() - oldPos;
	move(x() + delta.x(), y() + delta.y());
	oldPos = evt->globalPos();
}