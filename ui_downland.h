/********************************************************************************
** Form generated from reading UI file 'downland.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLAND_H
#define UI_DOWNLAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Downland
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *SQ;
    QPushButton *HQ;
    QPushButton *pushButton_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *Downland)
    {
        if (Downland->objectName().isEmpty())
            Downland->setObjectName(QStringLiteral("Downland"));
        Downland->resize(296, 188);
        verticalLayout_2 = new QVBoxLayout(Downland);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(Downland);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(frame_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);

        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(frame_3);

        SQ = new QPushButton(frame);
        SQ->setObjectName(QStringLiteral("SQ"));

        verticalLayout->addWidget(SQ);

        HQ = new QPushButton(frame);
        HQ->setObjectName(QStringLiteral("HQ"));

        verticalLayout->addWidget(HQ);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(Downland);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(frame_2);


        retranslateUi(Downland);

        QMetaObject::connectSlotsByName(Downland);
    } // setupUi

    void retranslateUi(QWidget *Downland)
    {
        Downland->setWindowTitle(QApplication::translate("Downland", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Downland", "\345\275\223\345\211\215\351\237\263\350\264\250\357\274\210\347\202\271\345\207\273\344\270\213\346\226\271\346\214\211\351\222\256\346\233\264\346\215\242\357\274\211", Q_NULLPTR));
        SQ->setText(QApplication::translate("Downland", "SQ(.flac\357\274\2142000\347\240\201\347\216\207)", Q_NULLPTR));
        HQ->setText(QApplication::translate("Downland", "HQ(.mp3\357\274\214320\347\240\201\347\216\207)", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Downland", "PQ(.mp3\357\274\214120\347\240\201\347\216\207)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Downland", "\351\200\211\346\213\251\350\267\257\345\276\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Downland: public Ui_Downland {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLAND_H
