/********************************************************************************
** Form generated from reading UI file 'play.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Play
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *musicList;
    QProgressBar *progressBar;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QLabel *time;
    QSlider *horizontalSlider;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *play;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *name;
    QLabel *songer;

    void setupUi(QWidget *Play)
    {
        if (Play->objectName().isEmpty())
            Play->setObjectName(QStringLiteral("Play"));
        Play->resize(626, 462);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Play->sizePolicy().hasHeightForWidth());
        Play->setSizePolicy(sizePolicy);
        Play->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(Play);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(Play);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QStringLiteral("background-image: url(:/image/bg.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(Play);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("background-image: url(:/image/bg.jpg);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        musicList = new QTableView(frame_2);
        musicList->setObjectName(QStringLiteral("musicList"));
        sizePolicy.setHeightForWidth(musicList->sizePolicy().hasHeightForWidth());
        musicList->setSizePolicy(sizePolicy);
        musicList->horizontalHeader()->setVisible(false);
        musicList->horizontalHeader()->setCascadingSectionResizes(false);
        musicList->horizontalHeader()->setDefaultSectionSize(220);
        musicList->horizontalHeader()->setHighlightSections(false);
        musicList->horizontalHeader()->setMinimumSectionSize(220);
        musicList->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        musicList->horizontalHeader()->setStretchLastSection(false);
        musicList->verticalHeader()->setVisible(false);
        musicList->verticalHeader()->setCascadingSectionResizes(false);
        musicList->verticalHeader()->setDefaultSectionSize(120);
        musicList->verticalHeader()->setHighlightSections(false);
        musicList->verticalHeader()->setMinimumSectionSize(120);

        verticalLayout_2->addWidget(musicList);


        verticalLayout->addWidget(frame_2);

        progressBar = new QProgressBar(Play);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        frame_3 = new QFrame(Play);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy3);
        frame_3->setStyleSheet(QStringLiteral("background-image: url(:/image/bg.jpg);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_5 = new QPushButton(frame_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(pushButton_5, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(frame_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy4.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy4.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy4.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(pushButton_8, 0, 4, 1, 1);

        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy4.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(pushButton_9, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_3);

        frame_4 = new QFrame(Play);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy5);
        frame_4->setStyleSheet(QStringLiteral("background-image: url(:/image/bg.jpg);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        time = new QLabel(frame_4);
        time->setObjectName(QStringLiteral("time"));

        gridLayout_2->addWidget(time, 0, 7, 1, 1);

        horizontalSlider = new QSlider(frame_4);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 0, 0, 1, 7);

        widget_2 = new QWidget(frame_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy6);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/vol+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(80, 80));

        verticalLayout_4->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy6.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy6);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/vol-.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(80, 80));

        verticalLayout_4->addWidget(pushButton_3);


        gridLayout_2->addWidget(widget_2, 2, 7, 1, 1);

        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy6.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy6);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/xunhuan.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(170, 170));

        gridLayout_2->addWidget(pushButton, 2, 6, 1, 1);

        play = new QPushButton(frame_4);
        play->setObjectName(QStringLiteral("play"));
        sizePolicy6.setHeightForWidth(play->sizePolicy().hasHeightForWidth());
        play->setSizePolicy(sizePolicy6);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/pause.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        play->setIcon(icon3);
        play->setIconSize(QSize(170, 170));

        gridLayout_2->addWidget(play, 2, 5, 1, 1);

        widget = new QWidget(frame_4);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy7(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy7);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        name = new QLabel(widget);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy7.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy7);

        verticalLayout_3->addWidget(name);

        songer = new QLabel(widget);
        songer->setObjectName(QStringLiteral("songer"));
        sizePolicy7.setHeightForWidth(songer->sizePolicy().hasHeightForWidth());
        songer->setSizePolicy(sizePolicy7);

        verticalLayout_3->addWidget(songer);


        gridLayout_2->addWidget(widget, 2, 0, 1, 4);


        verticalLayout->addWidget(frame_4);


        retranslateUi(Play);

        QMetaObject::connectSlotsByName(Play);
    } // setupUi

    void retranslateUi(QWidget *Play)
    {
        Play->setWindowTitle(QApplication::translate("Play", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Play", "\345\257\274\345\205\245", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Play", "\347\275\221\346\230\223\344\272\221", Q_NULLPTR)
         << QApplication::translate("Play", "QQ\351\237\263\344\271\220", Q_NULLPTR)
         << QString()
        );
        label->setText(QApplication::translate("Play", "\345\257\274\345\205\245\346\255\214\345\215\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("Play", "\345\275\223\345\211\215\346\222\255\346\224\276\345\210\227\350\241\250", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Play", "\346\270\205\347\251\272\345\210\227\350\241\250", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Play", "\344\277\235\345\255\230\346\255\214\345\215\225", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Play", "\344\270\213\350\275\275\346\211\200\346\234\211", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Play", "\346\270\205\347\251\272\346\234\254\345\234\260\346\255\214\345\215\225", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Play", "\344\270\213\350\275\275\350\267\257\345\276\204", Q_NULLPTR));
        time->setText(QApplication::translate("Play", "--:--/--:--", Q_NULLPTR));
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton->setText(QString());
        play->setText(QString());
        name->setText(QApplication::translate("Play", "---------------------", Q_NULLPTR));
        songer->setText(QApplication::translate("Play", "---------------------", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Play: public Ui_Play {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
