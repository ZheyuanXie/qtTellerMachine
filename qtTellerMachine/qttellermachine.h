#ifndef QTTELLERMACHINE_H
#define QTTELLERMACHINE_H

#include <QtWidgets/QMainWindow>
#include "ui_qttellermachine.h"
#include <vector>
#include "api/trade/win/public/ThostFtdcMdApi.h"
#include "api/trade/win/public/ThostFtdcTraderApi.h"
#include "mdspi.h"
#include "traderspi.h"

class qtTellerMachine : public QMainWindow
{
	Q_OBJECT

public:
	qtTellerMachine(QWidget *parent = 0);
	~qtTellerMachine();

	bool isMdFrontConnected;
	bool isMdLogined;
	bool isTraderFrontConnected;
	bool isTraderLogined;
	TThostFtdcDateType tradingDay;
	void setTradingDay() { ui.lb_tradingday->setText(QString("Trading Day:") + QString(tradingDay)); }

signals:
	void tick(CThostFtdcDepthMarketDataField*);
	void rtnTrade();
	void settlementInfoArrive(CThostFtdcSettlementInfoField*,bool);

private slots:
//Btn Click
	void mdLogin();
	void mdSubscribe();
	void mdUnsubscribe();
	void traderLogin();
	void traderAccountQry();
	void tradeLong();
	void tradeShort();
	void copyPrice();
	void qrySettlementInfo();
	void confirmSettlementInfo();
//Md Spi Callback
	void onTick(CThostFtdcDepthMarketDataField*);
//Trader Spi Callback
	void onRtnTrade();
	void onSettlementInfoArrive(CThostFtdcSettlementInfoField*,bool);
private:
	Ui::qtTellerMachineClass ui;
	CThostFtdcTraderApi* pTraderApi;
	CtpTraderSpi* pTraderSpi;
	CThostFtdcMdApi* pMdApi;
	CtpMdSpi* pMdSpi;
	std::vector<CThostFtdcDepthMarketDataField> marketData;	
	QString settlement;
//intraday rapid trading
/*
	1.send open order
	2.onRtnTrade -> send close order
	3.onRtnTrade -> finish (->send open order)
*/
	TThostFtdcPriceType armprice;
	TThostFtdcDirectionType armdir;
	bool isArmed;
};

#endif // QTTELLERMACHINE_H
