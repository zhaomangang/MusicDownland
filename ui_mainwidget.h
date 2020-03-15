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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *htmlview;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *downall;
    QPushButton *pushButton;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *inputEdit;
    QPushButton *sortButton;
    QPushButton *setbutton;
    QTableView *resultList;
    QTextBrowser *textBrowser;
    QLabel *label;
    QFrame *frame_4;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_6;
    QFrame *frame_6;
    QFrame *frame_8;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QSlider *valum;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_5;
    QPushButton *tui;
    QPushButton *pause;
    QPushButton *jin;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLabel *na;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(1697, 920);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/start.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWidget->setWindowIcon(icon);
        MainWidget->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(MainWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(1070, 108, 621, 211));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        htmlview = new QTextEdit(frame);
        htmlview->setObjectName(QStringLiteral("htmlview"));
        htmlview->setReadOnly(true);

        verticalLayout_2->addWidget(htmlview);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_7);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        downall = new QPushButton(frame_7);
        downall->setObjectName(QStringLiteral("downall"));

        horizontalLayout_3->addWidget(downall);

        pushButton = new QPushButton(frame_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton->raise();
        pushButton->raise();
        downall->raise();

        verticalLayout_2->addWidget(frame_7);

        frame_3 = new QFrame(MainWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 315, 1071, 601));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        inputEdit = new QLineEdit(frame_2);
        inputEdit->setObjectName(QStringLiteral("inputEdit"));

        horizontalLayout->addWidget(inputEdit);

        sortButton = new QPushButton(frame_2);
        sortButton->setObjectName(QStringLiteral("sortButton"));

        horizontalLayout->addWidget(sortButton);

        setbutton = new QPushButton(frame_2);
        setbutton->setObjectName(QStringLiteral("setbutton"));

        horizontalLayout->addWidget(setbutton);


        verticalLayout->addWidget(frame_2);

        resultList = new QTableView(frame_3);
        resultList->setObjectName(QStringLiteral("resultList"));

        verticalLayout->addWidget(resultList);

        textBrowser = new QTextBrowser(MainWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(1070, 320, 621, 391));
        label = new QLabel(MainWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1681, 81));
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-image: url(:/image/timg.jpg);"));
        frame_4 = new QFrame(MainWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(1070, 720, 421, 191));
        frame_4->setStyleSheet(QStringLiteral(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_10 = new QLabel(frame_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 1, 1, 1, 1);

        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 2, 1, 1, 1);

        frame_5 = new QFrame(MainWidget);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(1490, 720, 191, 191));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font: 16pt \"Arial\";"));

        horizontalLayout_2->addWidget(label_7);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/image/payy.png")));

        horizontalLayout_2->addWidget(label_6);

        frame_6 = new QFrame(MainWidget);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(0, 100, 1071, 221));
        frame_6->setStyleSheet(QStringLiteral("background-image: url(:/image/timg.jpg);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame_6);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(713, 0, 361, 221));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(7, 133, 351, 81));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_9);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(frame_9);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        valum = new QSlider(frame_9);
        valum->setObjectName(QStringLiteral("valum"));
        valum->setMaximum(100);
        valum->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(valum);

        frame_11 = new QFrame(frame_8);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(7, 7, 351, 121));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_11);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tui = new QPushButton(frame_11);
        tui->setObjectName(QStringLiteral("tui"));

        verticalLayout_5->addWidget(tui);

        pause = new QPushButton(frame_11);
        pause->setObjectName(QStringLiteral("pause"));

        verticalLayout_5->addWidget(pause);

        jin = new QPushButton(frame_11);
        jin->setObjectName(QStringLiteral("jin"));

        verticalLayout_5->addWidget(jin);

        frame_10 = new QFrame(frame_6);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(7, 7, 701, 201));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_10);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(frame_10);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));

        horizontalLayout_5->addWidget(label_8);

        na = new QLabel(frame_10);
        na->setObjectName(QStringLiteral("na"));
        na->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));

        horizontalLayout_5->addWidget(na);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MD\351\237\263\344\271\220\344\270\213\350\275\275beat1.0.0.1", Q_NULLPTR));
        downall->setText(QApplication::translate("MainWidget", "\346\211\271\351\207\217\344\270\213\350\275\275", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWidget", "\346\233\264\346\226\260\350\275\257\344\273\266", Q_NULLPTR));
        inputEdit->setText(QApplication::translate("MainWidget", "\345\205\211\345\271\264\344\271\213\345\244\226", Q_NULLPTR));
        sortButton->setText(QApplication::translate("MainWidget", "\346\220\234\347\264\242", Q_NULLPTR));
        setbutton->setText(QApplication::translate("MainWidget", "Setting", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MainWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\344\275\277\347\224\250\350\257\264\346\230\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">1\343\200\201</span><span style=\" font-size:11pt; color:#f80d54;\">\347\254\254\344\270\200\346\254\241\344\275\277\347\224\250\350\257\267\345\205\210\347\202\271\345\207\273</span><span style=\" font-size:11pt;\">Setting-&gt;\350\256\276\347\275\256\344\270\213\350\275\275\350\267\257\345\276\204\347"
                        "\255\211\357\274\214\350\256\276\347\275\256\345\256\214\347\233\264\346\216\245\345\205\263\351\227\255\347\252\227\345\217\243\345\215\263\345\217\257</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">2\343\200\201\350\276\223\345\205\245\346\255\214\345\220\215\346\210\226\346\255\214\346\211\213\345\220\215\346\210\226\345\205\266\345\256\203\347\233\270\345\205\263\344\277\241\346\201\257\347\202\271\345\207\273\346\220\234\347\264\242</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">3\343\200\201\347\202\271\345\207\273\344\270\213\350\275\275\345\220\216\350\257\267\347\255\211\345\276\205\344\270\213\350\275\275\345\256\214\346\210\220\345\206\215\347\202\271\345\207\273\344\270\213\350\275\275</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">4\343\200\201\347\202\271\345\207\273\346\267\273\345\212\240\357\274\214\346\267\273\345\212\240\350\207\263\345\276\205\344\270\213\350\275\275\345\210\227\350\241\250\357\274\214\351\200\211\345\256\214\345\220\216\347\202\271\345\207\273\346\211\271\351\207\217\344\270\213\350\275\275\347\255\211\345\276\205\344\270\213\350\275\275\345\256\214\346\210\220\357\274\210\346\211\271\351\207\217\344\270\213\350\275\275\346\227\266\345\217\257\350\203\275\345\207\272\347\216\260\345\220\214\344\270\200\351\246\226\346\255\214\346\230\276\347\244\272\344\270\244\346\254\241\345\274\200\345\247\213\344\270\213\350\275\275\357\274\214\345\256\236\351\231\205\350\277\230\346\230\257\344\270\213\344\272\206\344\270\200\346\254\241\357\274\214\346\207\222\345\276\227\346\224\271\344\272\206\357\274\214\344\270\215\345\275\261\345\223\215\344\275\277\347\224\250\357\274\211</span></p>\n"
"<p style=\" margin-top:0px; margin-bo"
                        "ttom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#00aaff;\">\346\263\250\357\274\232\347\224\261\344\272\216\346\234\254\344\272\272\346\260\264\345\271\263\346\234\211\351\231\220\344\270\224\345\274\200\345\217\221\350\277\207\344\272\216\344\273\223\344\277\203\357\274\214\351\232\276\345\205\215\345\255\230\345\234\250\345\220\204\347\247\215bug\357\274\214\345\244\247\345\256\266\345\217\257\344\273\245\351\202\256\344\273\266\345\217\215\351\246\210\347\273\231\346\210\221\346\210\226\344\270\213\350\275\275\346\272\220\347\240\201\350\207\252\350\241\214\344\277\256\346\224\271</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#f50b2a;\">\347\211\271\345\210\253\350\257\264\346\230\216\357\274\232\346\255\244\347\250\213\345\272\217\344\273\205\344\276\233\344\272\244\346\265\201\345\255\246\344"
                        "\271\240\357\274\214\350\257\267\345\213\277\347\224\250\344\275\234\345\225\206\344\270\232\347\224\250\351\200\224\343\200\202\345\246\202\344\275\277\347\224\250\344\270\255\345\207\272\347\216\260\344\273\273\344\275\225\346\263\225\345\212\241\351\227\256\351\242\230\344\275\234\350\200\205\346\246\202\344\270\215\350\264\237\350\264\243\343\200\202\350\257\267\346\224\257\346\214\201\346\255\243\347\211\210</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWidget", "                                           MD\351\237\263\344\271\220\344\270\213\350\275\275 beat1.0.0.1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWidget", "QQ\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWidget", "Author\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWidget", "E-mail\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWidget", "Mason_Zhao", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWidget", "zhaomangang@qq.com", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWidget", "982306618", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWidget", "\346\224\257\n"
"\346\214\201\n"
"\344\270\200\n"
"\344\270\213", Q_NULLPTR));
        label_6->setText(QString());
        label_9->setText(QApplication::translate("MainWidget", "\351\237\263\351\207\217", Q_NULLPTR));
        tui->setText(QApplication::translate("MainWidget", "\345\277\253\351\200\200", Q_NULLPTR));
        pause->setText(QApplication::translate("MainWidget", "\346\232\202\345\201\234", Q_NULLPTR));
        jin->setText(QApplication::translate("MainWidget", "\345\277\253\350\277\233", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWidget", "        \346\255\243\345\234\250\346\222\255\346\224\276\357\274\232", Q_NULLPTR));
        na->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
