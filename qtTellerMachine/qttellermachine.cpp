#include <QDebug>
#include <cstring>
#include "qttellermachine.h"
#include "settlementInfo.h"
#include "windows.h"

extern HANDLE g_hEvent;
extern char mdFront[];
extern char tradeFront[];

qtTellerMachine::qtTellerMachine(QWidget *parent)
: QMainWindow(parent)
{
	g_hEvent = CreateEvent(NULL, true, false, NULL);
	ui.setupUi(this);

	connect(this, SIGNAL(rtnTrade()), this, SLOT(onRtnTrade()));
	connect(this, SIGNAL(tick(CThostFtdcDepthMarketDataField*)), this, SLOT(onTick(CThostFtdcDepthMarketDataField*)));
	connect(this, SIGNAL(settlementInfoArrive(CThostFtdcSettlementInfoField*,bool)), this, SLOT(onSettlementInfoArrive(CThostFtdcSettlementInfoField*,bool)));

	isMdFrontConnected = false;
	isMdLogined = false;
	isTraderFrontConnected = false;
	isTraderLogined = false;
	isArmed = false;

	pMdApi = CThostFtdcMdApi::CreateFtdcMdApi(".\\md");
	pMdSpi = new CtpMdSpi(pMdApi);
	pMdApi->RegisterSpi(pMdSpi);
	pMdApi->RegisterFront(mdFront);
	pMdApi->Init();
	
	pTraderApi = CThostFtdcTraderApi::CreateFtdcTraderApi(".\\trade");
	pTraderSpi = new CtpTraderSpi(pTraderApi);
	pTraderApi->RegisterSpi((CThostFtdcTraderSpi*)pTraderSpi);
	pTraderApi->SubscribePublicTopic(THOST_TERT_RESTART);	
	pTraderApi->SubscribePrivateTopic(THOST_TERT_RESTART);
	pTraderApi->RegisterFront(tradeFront);						
	pTraderApi->Init();
}

qtTellerMachine::~qtTellerMachine()
{
	pTraderApi->Release();
	pMdApi->Release();
}

void qtTellerMachine::mdLogin()
{
	if (!isMdFrontConnected) {
		qDebug() << "Md front not connected";
		return;
	}
	else if (isMdLogined)
	{
		qDebug() << "Md front already logined";
		return;
	}
	TThostFtdcBrokerIDType appId;
	TThostFtdcUserIDType userId;
	TThostFtdcPasswordType passwd;
	pMdSpi->ReqUserLogin(appId, userId, passwd);
}

void qtTellerMachine::mdSubscribe()
{
	if (!isMdLogined){
		qDebug() << "Require md front login";
		return;
	}
	char ins[20];
	strcpy(ins, ui.le_ins->text().toStdString().c_str());
	pMdSpi->SubscribeMarketData(ins);
}

void qtTellerMachine::mdUnsubscribe()
{
	if (!isMdLogined){
		qDebug() << "Require md front login";
		return;
	}
	char ins[20];
	strcpy(ins, ui.le_ins->text().toStdString().c_str());
	pMdSpi->UnsubscribeMarketData(ins);
}

void qtTellerMachine::traderLogin()
{
	if (!isTraderFrontConnected) {
		qDebug() << "Trader front not connected";
		return;
	}
	else if (isTraderLogined)
	{
		qDebug() << "Trader front already logined";
		return;
	}
	char *appid = "7070";	//ces futures
	char username[10], password[10];
	strcpy(username, ui.le_usrname->text().toStdString().c_str());
	strcpy(password, ui.le_pswd->text().toStdString().c_str());
	pTraderSpi->ReqUserLogin(appid, username, password);
}

void qtTellerMachine::traderAccountQry()
{
	if (!isTraderLogined){
		qDebug() << "Require trader front login";
		return;
	}
	pTraderSpi->ReqQryTradingAccount();
}

void qtTellerMachine::onTick(CThostFtdcDepthMarketDataField *data)
{
	CThostFtdcDepthMarketDataField md;
	memcpy(&md, data, sizeof(CThostFtdcDepthMarketDataField));
	marketData.insert(marketData.end(), md);
	ui.lcd_lastPrice->display(md.LastPrice);
	ui.lb_ask->setText(QString::number(md.AskPrice1)+","+QString::number(md.AskVolume1));
	ui.lb_bid->setText(QString::number(md.BidPrice1)+","+QString::number(md.BidVolume1));
	if (ui.cb_save->isChecked())
	{
		
	}
}

void qtTellerMachine::tradeLong()
{
	if (isArmed) {
		qDebug() << "An order is armed";
		return;
	}
	qDebug() << "trade LONG!";
	TThostFtdcInstrumentIDType id;
	strcpy(id, ui.le_ins->text().toStdString().c_str());
	TThostFtdcDirectionType dir = THOST_FTDC_D_Buy;
	TThostFtdcCombOffsetFlagType kpp;
	kpp[0] = THOST_FTDC_OFEN_Open;
	TThostFtdcPriceType price = (double)ui.sb_tdprice->value();
	TThostFtdcVolumeType vol = 1;
	isArmed = true;
	armprice = price + ui.sb_tddiff->value();
	armdir = THOST_FTDC_D_Sell;
	pTraderSpi->ReqOrderInsert(id, dir, kpp, price, vol);
}

void qtTellerMachine::tradeShort()
{
	if (isArmed) {
		qDebug() << "An order is armed";
		return;
	}
	qDebug() << "trade SHORT!";
	TThostFtdcInstrumentIDType id;
	strcpy(id,ui.le_ins->text().toStdString().c_str());
	TThostFtdcDirectionType dir = THOST_FTDC_D_Sell;
	TThostFtdcCombOffsetFlagType kpp;
	kpp[0] = THOST_FTDC_OFEN_Open;
	TThostFtdcPriceType price=(double)ui.sb_tdprice->value();
	TThostFtdcVolumeType vol = 1;
	isArmed = true;
	armprice = price - ui.sb_tddiff->value();
	armdir = THOST_FTDC_D_Buy;
	pTraderSpi->ReqOrderInsert(id, dir, kpp, price, vol);
}

void qtTellerMachine::onRtnTrade()
{
	if (!isArmed) return;	//如果没有预位订单，就不管
	TThostFtdcInstrumentIDType id;
	strcpy(id, ui.le_ins->text().toStdString().c_str());
	TThostFtdcDirectionType dir = armdir;
	TThostFtdcCombOffsetFlagType kpp;
	kpp[0] = THOST_FTDC_OFEN_CloseToday;
	TThostFtdcPriceType price = armprice;
	TThostFtdcVolumeType vol = 1;
	isArmed = false;
	pTraderSpi->ReqOrderInsert(id, dir, kpp, price, vol);
}

void qtTellerMachine::copyPrice()
{
	ui.sb_tdprice->setValue(ui.lcd_lastPrice->intValue());
}

void qtTellerMachine::qrySettlementInfo()
{
	if (!isTraderLogined){
		qDebug() << "Require trader front login";
		return;
	}
	pTraderSpi->ReqSettlementInfo();
	settlement.clear();
}

void qtTellerMachine::confirmSettlementInfo()
{
	if (!isTraderLogined){
		qDebug() << "Require trader front login";
		return;
	}
	pTraderSpi->ReqSettlementInfoConfirm();
}

void qtTellerMachine::onSettlementInfoArrive(CThostFtdcSettlementInfoField* data,bool isLast)
{
	//CThostFtdcSettlementInfoField si;
	//memcpy(&si, data, sizeof(CThostFtdcSettlementInfoField));
	//settlement.append(QString("***********"));
	if (!isLast)
	{
		settlement.append(QString::fromLocal8Bit(data->Content, strlen(data->Content)));
	}
	if (isLast)
	{
		settlementInfo* w = new settlementInfo();
		w->show();
		w->setText(settlement);
	}
}