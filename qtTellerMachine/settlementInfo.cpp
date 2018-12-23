#include "settlementInfo.h"

settlementInfo::settlementInfo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

settlementInfo::~settlementInfo()
{

}

void settlementInfo::setText(QString data)
{
	ui.info->setText(data);
}
