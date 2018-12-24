/********************************************************************************
** Form generated from reading UI file 'qtTradingClock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTRADINGCLOCK_H
#define UI_QTTRADINGCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtTradingClock
{
public:
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdnumber;
    QLabel *label_2;

    void setupUi(QWidget *qtTradingClock)
    {
        if (qtTradingClock->objectName().isEmpty())
            qtTradingClock->setObjectName(QStringLiteral("qtTradingClock"));
        qtTradingClock->resize(458, 256);
        qtTradingClock->setContextMenuPolicy(Qt::NoContextMenu);
        verticalLayout = new QVBoxLayout(qtTradingClock);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        lcdnumber = new QLCDNumber(qtTradingClock);
        lcdnumber->setObjectName(QStringLiteral("lcdnumber"));
        lcdnumber->setMinimumSize(QSize(0, 100));
        lcdnumber->setDigitCount(8);
        lcdnumber->setProperty("value", QVariant(8.88889e+7));
        lcdnumber->setProperty("intValue", QVariant(88888888));

        verticalLayout->addWidget(lcdnumber);

        label_2 = new QLabel(qtTradingClock);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::RichText);

        verticalLayout->addWidget(label_2);


        retranslateUi(qtTradingClock);

        QMetaObject::connectSlotsByName(qtTradingClock);
    } // setupUi

    void retranslateUi(QWidget *qtTradingClock)
    {
        qtTradingClock->setWindowTitle(QApplication::translate("qtTradingClock", "Trading Clock", Q_NULLPTR));
        label_2->setText(QApplication::translate("qtTradingClock", "<html><head/><body><p>\346\227\251\347\233\230\357\274\2329:00 am - 11:00 am</p><p>\345\215\210\347\233\230\357\274\232 1:30 pm - 3:30 pm</p><p>\345\244\234\347\233\230\357\274\232 21:00 pm - 2:30 am</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qtTradingClock: public Ui_qtTradingClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTRADINGCLOCK_H
