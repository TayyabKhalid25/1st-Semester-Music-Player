/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QWidget *centralwidget;
    QLabel *label;
    QSlider *Seek;
    QPushButton *pushButton_PlayPause;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_SeekBackward;
    QPushButton *pushButton_SeekForward;
    QSlider *Volume;
    QLabel *label_4;
    QPushButton *pushButton_Mute;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 277);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QFont font;
        font.setFamilies({QString::fromUtf8("Copperplate Gothic Bold")});
        actionOpen->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 601, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label->setFrameShape(QFrame::Box);
        Seek = new QSlider(centralwidget);
        Seek->setObjectName("Seek");
        Seek->setGeometry(QRect(10, 90, 601, 31));
        Seek->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    background: #1ED760;  /* Set your desired background color for the groove */\n"
"    height: 6px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #FFFFFF, stop:1 #EDEDED);  /* Set your desired background color for the handle */\n"
"    width: 15px;\n"
"    height: 15px;\n"
"    margin-left: -5px;\n"
"    margin-right: -5px;\n"
"    border-radius: 7.5px;\n"
"    border: 1px solid #EDEDED; /* Border color for a more defined look */\n"
"    box-shadow: 0 2px 5px rgba(0, 0, 0, 0.3); /* Shadow effect */\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #EDEDED;  /* Set your desired background color for the increased volume part */\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #1ED760;  /* Set the same background color as the groove for the rest of the slider */\n"
"    border-radius: 3px;\n"
"    margin-right: -1px;  /* Adjust"
                        " the margin to ensure the transition between colors is smooth */\n"
"}\n"
""));
        Seek->setMaximum(100);
        Seek->setOrientation(Qt::Horizontal);
        pushButton_PlayPause = new QPushButton(centralwidget);
        pushButton_PlayPause->setObjectName("pushButton_PlayPause");
        pushButton_PlayPause->setGeometry(QRect(280, 140, 71, 71));
        pushButton_PlayPause->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:35px;\n"
"color:rgb(255,255,255);\n"
"background-color: rgb(24, 173, 76);\n"
"padding:0px\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:rgb(44,193,96);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 120, 63, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, 120, 61, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        pushButton_SeekBackward = new QPushButton(centralwidget);
        pushButton_SeekBackward->setObjectName("pushButton_SeekBackward");
        pushButton_SeekBackward->setGeometry(QRect(190, 140, 71, 71));
        pushButton_SeekBackward->setMouseTracking(true);
        pushButton_SeekBackward->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:35px;\n"
"color:rgb(255,255,255);\n"
"background-color: rgb(24, 173, 76);\n"
"padding:0px\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:rgb(44,193,96);\n"
"}"));
        pushButton_SeekForward = new QPushButton(centralwidget);
        pushButton_SeekForward->setObjectName("pushButton_SeekForward");
        pushButton_SeekForward->setGeometry(QRect(370, 140, 71, 71));
        pushButton_SeekForward->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:35px;\n"
"color:rgb(255,255,255);\n"
"background-color: rgb(24, 173, 76);\n"
"padding:0px\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:rgb(44,193,96);\n"
"}"));
        Volume = new QSlider(centralwidget);
        Volume->setObjectName("Volume");
        Volume->setGeometry(QRect(640, 20, 18, 160));
        Volume->setStyleSheet(QString::fromUtf8("QSlider::vertical {\n"
"    background: white;  /* Set the overall background color to white */\n"
"    width: 0px;        /* Set the width of the slider */\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;  /* Set the handle color to white */\n"
"    border: 1px solid #ccc;\n"
"    width: 0px;        /* Set the width of the handle */\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(24, 173, 76);  /* Set the color below the handle to the specified RGB color */\n"
"}\n"
""));
        Volume->setMinimum(0);
        Volume->setMaximum(100);
        Volume->setSingleStep(1);
        Volume->setPageStep(10);
        Volume->setValue(50);
        Volume->setSliderPosition(50);
        Volume->setOrientation(Qt::Vertical);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(623, 220, 61, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        pushButton_Mute = new QPushButton(centralwidget);
        pushButton_Mute->setObjectName("pushButton_Mute");
        pushButton_Mute->setGeometry(QRect(639, 190, 21, 21));
        pushButton_Mute->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"color:rgb(255,255,255);\n"
"background-color: rgb(24, 173, 76);\n"
"padding:0px\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:rgb(44,193,96);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 19));
        menubar->setFont(font);
        menubar->setAutoFillBackground(false);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuFile->setFont(font);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File Name:", nullptr));
        pushButton_PlayPause->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButton_SeekBackward->setText(QString());
        pushButton_SeekForward->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        pushButton_Mute->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
