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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *lb_morning;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lb_evening;
    QLabel *lb_noon;
    QFrame *frame;

    void setupUi(QWidget *qtTradingClock)
    {
        if (qtTradingClock->objectName().isEmpty())
            qtTradingClock->setObjectName(QStringLiteral("qtTradingClock"));
        qtTradingClock->setWindowModality(Qt::NonModal);
        qtTradingClock->resize(458, 261);
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

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(qtTradingClock);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lb_morning = new QLabel(qtTradingClock);
        lb_morning->setObjectName(QStringLiteral("lb_morning"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lb_morning);

        label_2 = new QLabel(qtTradingClock);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(qtTradingClock);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lb_evening = new QLabel(qtTradingClock);
        lb_evening->setObjectName(QStringLiteral("lb_evening"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lb_evening);

        lb_noon = new QLabel(qtTradingClock);
        lb_noon->setObjectName(QStringLiteral("lb_noon"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lb_noon);


        verticalLayout->addLayout(formLayout);

        frame = new QFrame(qtTradingClock);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);


        retranslateUi(qtTradingClock);

        QMetaObject::connectSlotsByName(qtTradingClock);
    } // setupUi

    void retranslateUi(QWidget *qtTradingClock)
    {
        qtTradingClock->setWindowTitle(QApplication::translate("qtTradingClock", "Trading Clock", Q_NULLPTR));
        label->setText(QApplication::translate("qtTradingClock", "\346\227\251\347\233\230 (09:00 - 11:00) :", Q_NULLPTR));
        lb_morning->setText(QApplication::translate("qtTradingClock", "/", Q_NULLPTR));
        label_2->setText(QApplication::translate("qtTradingClock", "\345\215\210\347\233\230 (13:30 - 15:00):", Q_NULLPTR));
        label_3->setText(QApplication::translate("qtTradingClock", "\345\244\234\347\233\230 (09:00 - 23:30):", Q_NULLPTR));
        lb_evening->setText(QApplication::translate("qtTradingClock", "/", Q_NULLPTR));
        lb_noon->setText(QApplication::translate("qtTradingClock", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qtTradingClock: public Ui_qtTradingClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTRADINGCLOCK_H
