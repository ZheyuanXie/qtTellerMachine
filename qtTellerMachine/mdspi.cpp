#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <QDebug>

using namespace std;
#include "mdspi.h"
#include "windows.h"
#include "qttellermachine.h"
#pragma warning(disable : 4996)

extern int requestId;  
extern HANDLE g_hEvent;
extern qtTellerMachine* tm;

void CtpMdSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
{
  IsErrorRspInfo(pRspInfo);
}

void CtpMdSpi::OnFrontDisconnected(int nReason)
{
	qDebug() << " RSP | Md front disconnected..."
		<< "reason=" << nReason;
	tm->isMdFrontConnected = false;
	tm->isMdLogined = false;
	SetEvent(g_hEvent);
}
		
void CtpMdSpi::OnHeartBeatWarning(int nTimeLapse)
{
	qDebug() << " RSP | Heart beat warning..." << " TimerLapse = " << nTimeLapse;
}

void CtpMdSpi::OnFrontConnected()
{
	qDebug() << " RSP | Md front connected";
	tm->isMdFrontConnected = true;
	SetEvent(g_hEvent);
}

void CtpMdSpi::ReqUserLogin(TThostFtdcBrokerIDType	appId,
	        TThostFtdcUserIDType	userId,	TThostFtdcPasswordType	passwd)
{
	CThostFtdcReqUserLoginField req;
	memset(&req, 0, sizeof(req));
	strcpy(req.BrokerID, appId);
	strcpy(req.UserID, userId);
	strcpy(req.Password, passwd);
	int ret = pUserApi->ReqUserLogin(&req, ++requestId);	
	qDebug() << " REQ | Md login..." << ((ret == 0) ? "SUCCESSED" : "FAILED");
	SetEvent(g_hEvent);
}

void CtpMdSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (!IsErrorRspInfo(pRspInfo) && pRspUserLogin)
	{
		qDebug() << " RSP | Md logined... Trading day:" << pRspUserLogin->TradingDay;
		tm->isMdLogined = true;
		memcpy(tm->tradingDay, pRspUserLogin->TradingDay,sizeof(TThostFtdcDateType));
		tm->setTradingDay();
	}
  if(bIsLast) SetEvent(g_hEvent);
}

void CtpMdSpi::SubscribeMarketData(char* instIdList)
{
  vector<char*> list;
  char *token = strtok(instIdList, ",");
  while( token != NULL ){
    list.push_back(token); 
    token = strtok(NULL, ",");
  }
  unsigned int len = list.size();
  char** pInstId = new char* [len]; 
  for(unsigned int i=0; i<len;i++)  pInstId[i]=list[i]; 
  int ret=pUserApi->SubscribeMarketData(pInstId, len);
  qDebug() << " REQ | Md subscribe..." << ((ret == 0) ? "SUCCESSED" : "FAILED");
  SetEvent(g_hEvent);
}

void CtpMdSpi::UnsubscribeMarketData(char* instIdList)
{
	vector<char*> list;
	char *token = strtok(instIdList, ",");
	while (token != NULL){
		list.push_back(token);
		token = strtok(NULL, ",");
	}
	unsigned int len = list.size();
	char** pInstId = new char*[len];
	for (unsigned int i = 0; i<len; i++)  pInstId[i] = list[i];
	int ret = pUserApi->UnSubscribeMarketData(pInstId, len);
	qDebug() << " REQ | Md unsubscribe..." << ((ret == 0) ? "SUCCESSED" : "FAILED");
	SetEvent(g_hEvent);
}

void CtpMdSpi::OnRspSubMarketData(
         CThostFtdcSpecificInstrumentField *pSpecificInstrument, 
         CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	qDebug() << " RSP | Md subscribed... SUCCESSED";
  if(bIsLast)  SetEvent(g_hEvent);
}

void CtpMdSpi::OnRspUnSubMarketData(
             CThostFtdcSpecificInstrumentField *pSpecificInstrument,
             CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	qDebug() << " RSP | Md unsubscribed... SUCCESSED";
  if(bIsLast)  SetEvent(g_hEvent);
}

void CtpMdSpi::OnRtnDepthMarketData(
             CThostFtdcDepthMarketDataField *pDepthMarketData)
{
	tm->tick(pDepthMarketData);
	qDebug() << " Time:" << pDepthMarketData->UpdateTime
		<< " Millisec:" << pDepthMarketData->UpdateMillisec
		<< "ID.:" << pDepthMarketData->InstrumentID
		<< "LastPrice:" << pDepthMarketData->LastPrice
		<< "OpenInterest:" << pDepthMarketData->OpenInterest
		<< "Bid1:" << pDepthMarketData->BidPrice1 << pDepthMarketData->BidVolume1
		<< "Ask1:" << pDepthMarketData->AskPrice1 << pDepthMarketData->AskVolume1;
}

bool CtpMdSpi::IsErrorRspInfo(CThostFtdcRspInfoField *pRspInfo)
{	
  bool ret = ((pRspInfo) && (pRspInfo->ErrorID != 0));
  if (ret){
    qDebug()<<" RSP | "<<pRspInfo->ErrorMsg<<endl;
  }
  return ret;
}