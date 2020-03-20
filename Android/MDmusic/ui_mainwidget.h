/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QGridLayout *gridLayout;
    QPushButton *set;
    QLabel *notice;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *inputEdit;
    QProgressBar *progressBar;
    QPushButton *sort;
    QTableView *resultList;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *play;
    QSlider *horizontalSlider;
    QPushButton *menu;
    QPushButton *playpage;
    QLabel *time;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *name;
    QLabel *songer;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(638, 936);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWidget->sizePolicy().hasHeightForWidth());
        MainWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(MainWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_4 = new QFrame(MainWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        set = new QPushButton(frame_4);
        set->setObjectName(QStringLiteral("set"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(set->sizePolicy().hasHeightForWidth());
        set->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/set.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        set->setIcon(icon);
        set->setIconSize(QSize(110, 110));

        gridLayout->addWidget(set, 0, 2, 1, 1);

        notice = new QLabel(frame_4);
        notice->setObjectName(QStringLiteral("notice"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(notice->sizePolicy().hasHeightForWidth());
        notice->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(notice, 0, 0, 2, 1);


        verticalLayout->addWidget(frame_4);

        frame_2 = new QFrame(MainWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy4);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        inputEdit = new QLineEdit(frame_3);
        inputEdit->setObjectName(QStringLiteral("inputEdit"));

        horizontalLayout_2->addWidget(inputEdit);

        progressBar = new QProgressBar(frame_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        sort = new QPushButton(frame_3);
        sort->setObjectName(QStringLiteral("sort"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/sort.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        sort->setIcon(icon1);
        sort->setIconSize(QSize(110, 110));

        horizontalLayout_2->addWidget(sort);


        verticalLayout_2->addWidget(frame_3);

        resultList = new QTableView(frame_2);
        resultList->setObjectName(QStringLiteral("resultList"));
        resultList->horizontalHeader()->setVisible(false);
        resultList->horizontalHeader()->setCascadingSectionResizes(false);
        resultList->horizontalHeader()->setDefaultSectionSize(220);
        resultList->horizontalHeader()->setHighlightSections(true);
        resultList->horizontalHeader()->setMinimumSectionSize(220);
        resultList->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        resultList->horizontalHeader()->setStretchLastSection(false);
        resultList->verticalHeader()->setVisible(false);
        resultList->verticalHeader()->setCascadingSectionResizes(false);
        resultList->verticalHeader()->setDefaultSectionSize(120);
        resultList->verticalHeader()->setHighlightSections(false);
        resultList->verticalHeader()->setMinimumSectionSize(120);

        verticalLayout_2->addWidget(resultList);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(MainWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy5);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        play = new QPushButton(frame);
        play->setObjectName(QStringLiteral("play"));
        sizePolicy2.setHeightForWidth(play->sizePolicy().hasHeightForWidth());
        play->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/pause.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        play->setIcon(icon2);
        play->setIconSize(QSize(170, 170));

        gridLayout_2->addWidget(play, 2, 5, 1, 1);

        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 0, 0, 1, 6);

        menu = new QPushButton(frame);
        menu->setObjectName(QStringLiteral("menu"));
        sizePolicy2.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/menu.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon3);
        menu->setIconSize(QSize(170, 170));

        gridLayout_2->addWidget(menu, 2, 6, 1, 1);

        playpage = new QPushButton(frame);
        playpage->setObjectName(QStringLiteral("playpage"));
        sizePolicy2.setHeightForWidth(playpage->sizePolicy().hasHeightForWidth());
        playpage->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/fm.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        playpage->setIcon(icon4);
        playpage->setIconSize(QSize(170, 170));

        gridLayout_2->addWidget(playpage, 2, 0, 1, 1);

        time = new QLabel(frame);
        time->setObjectName(QStringLiteral("time"));

        gridLayout_2->addWidget(time, 0, 6, 1, 1);

        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy6);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        name = new QLabel(widget);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy7(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy7);

        verticalLayout_3->addWidget(name);

        songer = new QLabel(widget);
        songer->setObjectName(QStringLiteral("songer"));
        sizePolicy7.setHeightForWidth(songer->sizePolicy().hasHeightForWidth());
        songer->setSizePolicy(sizePolicy7);

        verticalLayout_3->addWidget(songer);


        gridLayout_2->addWidget(widget, 2, 1, 1, 4);


        verticalLayout->addWidget(frame);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", Q_NULLPTR));
        set->setText(QString());
        notice->setText(QApplication::translate("MainWidget", "MD\351\237\263\344\271\220\342\200\224\342\200\224\345\260\261\346\230\257\345\205\215\350\264\271", Q_NULLPTR));
        inputEdit->setInputMask(QString());
        inputEdit->setText(QString());
        sort->setText(QString());
        play->setText(QString());
        menu->setText(QString());
        playpage->setText(QString());
        time->setText(QApplication::translate("MainWidget", "--:--/--:--", Q_NULLPTR));
        name->setText(QApplication::translate("MainWidget", "---------------------", Q_NULLPTR));
        songer->setText(QApplication::translate("MainWidget", "---------------------", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
