#include <QApplication>
#include "qttellermachine.h"
#include "qtTradingClock.h"
#include "Windows.h"

///////////*ȫ�ֱ���������*///////////

//������
int requestId = 0;

//ǰ�õ�ַ
char mdFront[] = "tcp://116.236.239.136:41213";
char tradeFront[] = "tcp://116.236.239.136:41205";

//�¼����
HANDLE g_hEvent;

//����ָ��
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
