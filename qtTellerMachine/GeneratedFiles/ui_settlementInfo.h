/********************************************************************************
** Form generated from reading UI file 'settlementInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTLEMENTINFO_H
#define UI_SETTLEMENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settlementInfo
{
public:
    QTextEdit *info;
    QLabel *label;

    void setupUi(QWidget *settlementInfo)
    {
        if (settlementInfo->objectName().isEmpty())
            settlementInfo->setObjectName(QStringLiteral("settlementInfo"));
        settlementInfo->resize(1179, 442);
        info = new QTextEdit(settlementInfo);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(20, 50, 1141, 371));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        info->setFont(font);
        info->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        info->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        info->setAcceptRichText(false);
        label = new QLabel(settlementInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 91, 16));

        retranslateUi(settlementInfo);

        QMetaObject::connectSlotsByName(settlementInfo);
    } // setupUi

    void retranslateUi(QWidget *settlementInfo)
    {
        settlementInfo->setWindowTitle(QApplication::translate("settlementInfo", "settlementInfo", Q_NULLPTR));
        label->setText(QApplication::translate("settlementInfo", "Settlement Info:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settlementInfo: public Ui_settlementInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTLEMENTINFO_H
