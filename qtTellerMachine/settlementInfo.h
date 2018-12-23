#ifndef SETTLEMENTINFO_H
#define SETTLEMENTINFO_H

#include <QtWidgets/QWidget>
#include "ui_settlementInfo.h"

class settlementInfo : public QWidget
{
	Q_OBJECT

public:
	settlementInfo(QWidget *parent = 0);
	~settlementInfo();
	void setText(QString);
private:
	Ui::settlementInfo ui;
};

#endif // SETTLEMENTINFO_H
