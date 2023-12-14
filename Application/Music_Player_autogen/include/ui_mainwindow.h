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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
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
    QListWidget *playlistWidget;
    QPushButton *pushButton_MediaForward;
    QPushButton *pushButton_MediaBackward;
    QPushButton *pushButton_AddMedia;
    QPushButton *pushButton_RemoveMedia;
    QPushButton *pushButton_Playback;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(691, 383);
        QPalette palette;
        QLinearGradient gradient(0, 0, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(0, 0, 0, 255));
        gradient.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(0, 0, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(0, 0, 0, 255));
        gradient1.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(0, 0, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(0, 0, 0, 255));
        gradient2.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(0, 0, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(0, 0, 0, 255));
        gradient3.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(0, 0, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(0, 0, 0, 255));
        gradient4.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(0, 0, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(0, 0, 0, 255));
        gradient5.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(0, 0, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(0, 0, 0, 255));
        gradient6.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(0, 0, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(0, 0, 0, 255));
        gradient7.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(0, 0, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(0, 0, 0, 255));
        gradient8.setColorAt(1, QColor(46, 46, 46, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(46, 46, 46, 255));\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 601, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Copperplate Gothic Bold")});
        font.setPointSize(11);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label->setFrameShape(QFrame::Box);
        Seek = new QSlider(centralwidget);
        Seek->setObjectName("Seek");
        Seek->setGeometry(QRect(10, 70, 600, 30));
        Seek->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal\n"
"{\n"
"    background: #1ED760;  /* Set your desired background color for the groove */\n"
"    height: 6px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #FFFFFF, stop:1 #EDEDED);  /* Set your desired background color for the handle */\n"
"    width: 8px;\n"
"    height: 15px;\n"
"    border-radius: 7.5px;\n"
"    border: 1px solid #000000; /* Border color for a more defined look */\n"
"}\n"
"\n"
"QSlider::add-page:horizontal \n"
"{\n"
"    background: #EDEDED;  /* Set your desired background color for the increased volume part */\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal \n"
"{\n"
"    background: #1ED760;  /* Set the same background color as the groove for the rest of the slider */\n"
"    border-radius: 3px;\n"
"    margin-right: -1px;  /* Adjust the margin to ensure the transition between colors is smooth */\n"
"}\n"
""));
        Seek->setMaximum(100);
        Seek->setOrientation(Qt::Horizontal);
        pushButton_PlayPause = new QPushButton(centralwidget);
        pushButton_PlayPause->setObjectName("pushButton_PlayPause");
        pushButton_PlayPause->setGeometry(QRect(276, 120, 71, 71));
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
"}\n"
"QPushButton:Push\n"
"{\n"
"background-color:rgb(74,223,226);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 81, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 100, 81, 20));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_SeekBackward = new QPushButton(centralwidget);
        pushButton_SeekBackward->setObjectName("pushButton_SeekBackward");
        pushButton_SeekBackward->setGeometry(QRect(186, 120, 71, 71));
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
        pushButton_SeekForward->setGeometry(QRect(366, 120, 71, 71));
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
        Volume->setGeometry(QRect(640, 20, 18, 141));
        Volume->setStyleSheet(QString::fromUtf8("QSlider::vertical \n"
"{\n"
"    background: transparent; \n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"background: rgb(30, 30, 30);\n"
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
        label_4->setGeometry(QRect(619, 191, 61, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Copperplate Gothic Bold")});
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label_4->setAlignment(Qt::AlignCenter);
        pushButton_Mute = new QPushButton(centralwidget);
        pushButton_Mute->setObjectName("pushButton_Mute");
        pushButton_Mute->setGeometry(QRect(638, 170, 21, 21));
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
        playlistWidget = new QListWidget(centralwidget);
        playlistWidget->setObjectName("playlistWidget");
        playlistWidget->setGeometry(QRect(10, 221, 601, 151));
        playlistWidget->setFont(font);
        playlistWidget->setAutoFillBackground(true);
        playlistWidget->setStyleSheet(QString::fromUtf8("QListWidget \n"
"{\n"
"background: transparent; \n"
"}\n"
"QListWidget:item\n"
"{\n"
"color:white;\n"
"}"));
        playlistWidget->setFrameShape(QFrame::StyledPanel);
        playlistWidget->setFrameShadow(QFrame::Sunken);
        playlistWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        playlistWidget->setDragEnabled(true);
        playlistWidget->setDragDropOverwriteMode(false);
        playlistWidget->setDragDropMode(QAbstractItemView::DragDrop);
        playlistWidget->setDefaultDropAction(Qt::MoveAction);
        playlistWidget->setSelectionMode(QAbstractItemView::ContiguousSelection);
        playlistWidget->setMovement(QListView::Free);
        playlistWidget->setProperty("isWrapping", QVariant(false));
        playlistWidget->setBatchSize(50);
        playlistWidget->setWordWrap(true);
        playlistWidget->setSelectionRectVisible(true);
        pushButton_MediaForward = new QPushButton(centralwidget);
        pushButton_MediaForward->setObjectName("pushButton_MediaForward");
        pushButton_MediaForward->setGeometry(QRect(456, 120, 71, 71));
        pushButton_MediaForward->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_MediaBackward = new QPushButton(centralwidget);
        pushButton_MediaBackward->setObjectName("pushButton_MediaBackward");
        pushButton_MediaBackward->setGeometry(QRect(96, 120, 71, 71));
        pushButton_MediaBackward->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_AddMedia = new QPushButton(centralwidget);
        pushButton_AddMedia->setObjectName("pushButton_AddMedia");
        pushButton_AddMedia->setGeometry(QRect(626, 230, 50, 50));
        pushButton_AddMedia->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:25px;\n"
"color:rgb(255,255,255);\n"
"background-color: rgb(24, 173, 76);\n"
"padding:0px\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:rgb(44,193,96);\n"
"}"));
        pushButton_RemoveMedia = new QPushButton(centralwidget);
        pushButton_RemoveMedia->setObjectName("pushButton_RemoveMedia");
        pushButton_RemoveMedia->setGeometry(QRect(626, 290, 50, 50));
        pushButton_RemoveMedia->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:25px;\n"
"color:rgb(255,255,255);\n"
"background-color: rgb(24, 173, 76);\n"
"padding:0px\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:rgb(44,193,96);\n"
"}"));
        pushButton_Playback = new QPushButton(centralwidget);
        pushButton_Playback->setObjectName("pushButton_Playback");
        pushButton_Playback->setGeometry(QRect(553, 140, 50, 50));
        pushButton_Playback->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:25px;\n"
"color:rgb(255,255,255);\n"
"background-color: rgb(24, 173, 76);\n"
"padding:0px\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:rgb(44,193,96);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File Name:", nullptr));
        pushButton_PlayPause->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        pushButton_SeekBackward->setText(QString());
        pushButton_SeekForward->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        pushButton_Mute->setText(QString());
        pushButton_MediaForward->setText(QString());
        pushButton_MediaBackward->setText(QString());
        pushButton_AddMedia->setText(QString());
        pushButton_RemoveMedia->setText(QString());
        pushButton_Playback->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
