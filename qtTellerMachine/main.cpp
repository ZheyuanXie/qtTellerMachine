#include <QApplication>
#include "qttellermachine.h"
#include "qtTradingClock.h"
#include "Windows.h"

///////////*全局变量定义区*///////////

//请求编号
int requestId = 0;

//前置地址
char mdFront[] = "tcp://116.236.239.136:41213";
char tradeFront[] = "tcp://116.236.239.136:41205";

//事件句柄
HANDLE g_hEvent;

//主窗指针
qtTellerMachine* tm;
/////////////////////////////////////

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qtTellerMachine w;
	tm = &w;
	w.show();
	qtTradingClock clock;
	clock.setWindowFlag(Qt::WindowStaysOnTopHint);
	clock.show();
	return a.exec();
}
