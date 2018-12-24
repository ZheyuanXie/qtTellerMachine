/********************************************************************************
** Form generated from reading UI file 'qttellermachine.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTELLERMACHINE_H
#define UI_QTTELLERMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "oglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_qtTellerMachineClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_mdlogin;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *le_ins;
    QCheckBox *cb_save;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_subscribe;
    QPushButton *btn_unsubscribe;
    QLabel *lb_tradingday;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *le_usrname;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *le_pswd;
    QPushButton *btn_tdlogin;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *btn_accountQry;
    QVBoxLayout *verticalLayout_4;
    OGLWidget *openGLWidget;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *sb_tdprice;
    QLabel *label_4;
    QSpinBox *sb_tddiff;
    QPushButton *btn_copyPrice;
    QLCDNumber *lcd_lastPrice;
    QLabel *lb_ask;
    QPushButton *pushButton_4;
    QLabel *lb_bid;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *qtTellerMachineClass)
    {
        if (qtTellerMachineClass->objectName().isEmpty())
            qtTellerMachineClass->setObjectName(QStringLiteral("qtTellerMachineClass"));
        qtTellerMachineClass->resize(1142, 686);
        qtTellerMachineClass->setMinimumSize(QSize(0, 0));
        qtTellerMachineClass->setMaximumSize(QSize(1920, 1080));
        qtTellerMachineClass->setTabShape(QTabWidget::Rounded);
        qtTellerMachineClass->setDockNestingEnabled(false);
        centralWidget = new QWidget(qtTellerMachineClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btn_mdlogin = new QPushButton(groupBox);
        btn_mdlogin->setObjectName(QStringLiteral("btn_mdlogin"));

        verticalLayout_2->addWidget(btn_mdlogin);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        le_ins = new QLineEdit(groupBox);
        le_ins->setObjectName(QStringLiteral("le_ins"));

        horizontalLayout->addWidget(le_ins);

        cb_save = new QCheckBox(groupBox);
        cb_save->setObjectName(QStringLiteral("cb_save"));
        cb_save->setChecked(true);

        horizontalLayout->addWidget(cb_save);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btn_subscribe = new QPushButton(groupBox);
        btn_subscribe->setObjectName(QStringLiteral("btn_subscribe"));

        horizontalLayout_5->addWidget(btn_subscribe);

        btn_unsubscribe = new QPushButton(groupBox);
        btn_unsubscribe->setObjectName(QStringLiteral("btn_unsubscribe"));

        horizontalLayout_5->addWidget(btn_unsubscribe);


        verticalLayout_2->addLayout(horizontalLayout_5);

        lb_tradingday = new QLabel(groupBox);
        lb_tradingday->setObjectName(QStringLiteral("lb_tradingday"));

        verticalLayout_2->addWidget(lb_tradingday);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        le_usrname = new QLineEdit(groupBox_2);
        le_usrname->setObjectName(QStringLiteral("le_usrname"));

        horizontalLayout_3->addWidget(le_usrname);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        le_pswd = new QLineEdit(groupBox_2);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        le_pswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(le_pswd);


        verticalLayout_3->addLayout(horizontalLayout_4);

        btn_tdlogin = new QPushButton(groupBox_2);
        btn_tdlogin->setObjectName(QStringLiteral("btn_tdlogin"));

        verticalLayout_3->addWidget(btn_tdlogin);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        btn_accountQry = new QPushButton(groupBox_2);
        btn_accountQry->setObjectName(QStringLiteral("btn_accountQry"));

        verticalLayout_3->addWidget(btn_accountQry);


        verticalLayout->addWidget(groupBox_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        openGLWidget = new OGLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setMinimumSize(QSize(300, 300));

        verticalLayout_4->addWidget(openGLWidget);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        sb_tdprice = new QSpinBox(groupBox_3);
        sb_tdprice->setObjectName(QStringLiteral("sb_tdprice"));
        sb_tdprice->setMaximum(9999);

        gridLayout->addWidget(sb_tdprice, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        sb_tddiff = new QSpinBox(groupBox_3);
        sb_tddiff->setObjectName(QStringLiteral("sb_tddiff"));
        sb_tddiff->setMinimum(1);
        sb_tddiff->setMaximum(5);
        sb_tddiff->setValue(1);

        gridLayout->addWidget(sb_tddiff, 0, 3, 1, 1);

        btn_copyPrice = new QPushButton(groupBox_3);
        btn_copyPrice->setObjectName(QStringLiteral("btn_copyPrice"));

        gridLayout->addWidget(btn_copyPrice, 1, 1, 1, 1);

        lcd_lastPrice = new QLCDNumber(groupBox_3);
        lcd_lastPrice->setObjectName(QStringLiteral("lcd_lastPrice"));
        lcd_lastPrice->setDigitCount(4);
        lcd_lastPrice->setSegmentStyle(QLCDNumber::Flat);
        lcd_lastPrice->setProperty("value", QVariant(8888));

        gridLayout->addWidget(lcd_lastPrice, 2, 0, 2, 3);

        lb_ask = new QLabel(groupBox_3);
        lb_ask->setObjectName(QStringLiteral("lb_ask"));

        gridLayout->addWidget(lb_ask, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);

        gridLayout->addWidget(pushButton_4, 2, 4, 2, 2);

        lb_bid = new QLabel(groupBox_3);
        lb_bid->setObjectName(QStringLiteral("lb_bid"));

        gridLayout->addWidget(lb_bid, 3, 3, 1, 1);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 5, 1, 1);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 255, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 255, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 170, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        pushButton_3->setPalette(palette);

        gridLayout->addWidget(pushButton_3, 0, 4, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);


        gridLayout_2->addLayout(verticalLayout_4, 0, 1, 1, 1);

        qtTellerMachineClass->setCentralWidget(centralWidget);

        retranslateUi(qtTellerMachineClass);
        QObject::connect(btn_mdlogin, SIGNAL(clicked()), qtTellerMachineClass, SLOT(mdLogin()));
        QObject::connect(btn_subscribe, SIGNAL(clicked()), qtTellerMachineClass, SLOT(mdSubscribe()));
        QObject::connect(btn_tdlogin, SIGNAL(clicked()), qtTellerMachineClass, SLOT(traderLogin()));
        QObject::connect(btn_accountQry, SIGNAL(clicked()), qtTellerMachineClass, SLOT(traderAccountQry()));
        QObject::connect(btn_unsubscribe, SIGNAL(clicked()), qtTellerMachineClass, SLOT(mdUnsubscribe()));
        QObject::connect(btn_copyPrice, SIGNAL(clicked()), qtTellerMachineClass, SLOT(copyPrice()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), qtTellerMachineClass, SLOT(tradeLong()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), qtTellerMachineClass, SLOT(tradeShort()));
        QObject::connect(pushButton, SIGNAL(clicked()), qtTellerMachineClass, SLOT(confirmSettlementInfo()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), qtTellerMachineClass, SLOT(qrySettlementInfo()));

        QMetaObject::connectSlotsByName(qtTellerMachineClass);
    } // setupUi

    void retranslateUi(QMainWindow *qtTellerMachineClass)
    {
        qtTellerMachineClass->setWindowTitle(QApplication::translate("qtTellerMachineClass", "qtTellerMachine", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("qtTellerMachineClass", "MD", Q_NULLPTR));
        btn_mdlogin->setText(QApplication::translate("qtTellerMachineClass", "Login", Q_NULLPTR));
        label_6->setText(QApplication::translate("qtTellerMachineClass", "INST:", Q_NULLPTR));
        le_ins->setText(QApplication::translate("qtTellerMachineClass", "m1905", Q_NULLPTR));
        cb_save->setText(QApplication::translate("qtTellerMachineClass", "Save To File", Q_NULLPTR));
        btn_subscribe->setText(QApplication::translate("qtTellerMachineClass", "Subscribe", Q_NULLPTR));
        btn_unsubscribe->setText(QApplication::translate("qtTellerMachineClass", "Unsubscribe", Q_NULLPTR));
        lb_tradingday->setText(QApplication::translate("qtTellerMachineClass", "TradingDay:N/A", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("qtTellerMachineClass", "TRADE", Q_NULLPTR));
        label->setText(QApplication::translate("qtTellerMachineClass", "USER:", Q_NULLPTR));
        le_usrname->setText(QString());
        label_2->setText(QApplication::translate("qtTellerMachineClass", "PSWD:", Q_NULLPTR));
        le_pswd->setText(QString());
        le_pswd->setPlaceholderText(QString());
        btn_tdlogin->setText(QApplication::translate("qtTellerMachineClass", "Login", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("qtTellerMachineClass", "Settlement INFO", Q_NULLPTR));
        pushButton->setText(QApplication::translate("qtTellerMachineClass", "Confirm Seattlement INFO", Q_NULLPTR));
        btn_accountQry->setText(QApplication::translate("qtTellerMachineClass", "Account Qry", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("qtTellerMachineClass", "INTRADAY TRADING", Q_NULLPTR));
        label_3->setText(QApplication::translate("qtTellerMachineClass", "PRICE:", Q_NULLPTR));
        label_4->setText(QApplication::translate("qtTellerMachineClass", "THRES:", Q_NULLPTR));
        btn_copyPrice->setText(QApplication::translate("qtTellerMachineClass", "\342\206\221", Q_NULLPTR));
        lb_ask->setText(QApplication::translate("qtTellerMachineClass", "N/A", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("qtTellerMachineClass", "CLOSE ALL", Q_NULLPTR));
        lb_bid->setText(QApplication::translate("qtTellerMachineClass", "N/A", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("qtTellerMachineClass", "SHORT", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("qtTellerMachineClass", "LONG", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qtTellerMachineClass: public Ui_qtTellerMachineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTELLERMACHINE_H
