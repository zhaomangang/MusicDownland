/********************************************************************************
** Form generated from reading UI file 'notice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICE_H
#define UI_NOTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notice
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *Notice)
    {
        if (Notice->objectName().isEmpty())
            Notice->setObjectName(QStringLiteral("Notice"));
        Notice->resize(400, 300);
        verticalLayout = new QVBoxLayout(Notice);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(Notice);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(Notice);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Notice);

        QMetaObject::connectSlotsByName(Notice);
    } // setupUi

    void retranslateUi(QWidget *Notice)
    {
        Notice->setWindowTitle(QApplication::translate("Notice", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Notice", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Notice: public Ui_Notice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICE_H
