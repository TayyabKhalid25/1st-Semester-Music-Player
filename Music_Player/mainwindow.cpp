#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qfiledialog.h"
#include "qstyle.h"
#include "QMediaPlayer"
#include "qaudio.h"
#include "QAudioOutput"
#include "QAudioOutput.h"
#include <fstream>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MPlayer = new QMediaPlayer;
    audioOutput=new QAudioOutput;
    MPlayer->setAudioOutput(audioOutput);

    ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_SeekBackward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_SeekForward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));

    audioOutput->setVolume(ui->Volume->value()/1000.0);
    connect(MPlayer,QMediaPlayer::durationChanged,this,&MainWindow::durationChanged);
    connect(MPlayer,QMediaPlayer::positionChanged,this,&MainWindow::positionChanged);

    ui->Seek->setRange(0,MPlayer->duration()/1000);

    std::ifstream fin("LastPlayed.txt");  // To ensure last file is available on startup
    char Filename[200];
    fin.getline(Filename,200);
    fin.close();
    QString name = Filename;
    MPlayer->setSource(QUrl(name));
    QFileInfo fileinfo(name);
    ui->label->setText(fileinfo.baseName());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateduration(quint64 duration)
{
    QString timestr;
    if (duration || Mduration)
    {
        QTime CurrentTime((duration/3600)%60,(duration/60)%60,duration%60,(duration*1000)%1000);
        QTime totalTime((Mduration/3600)%60,(Mduration/60)%60,Mduration%60,(Mduration*1000)%1000);
        QString format="mm:ss";
        if(Mduration>3600)  // If audio file is larger than an hour, use hour format
            format="hh:mm:ss";
        ui->label_2->setText(CurrentTime.toString(format));
        ui->label_3->setText(totalTime.toString(format));
        if (CurrentTime == totalTime){  // When song finishes, change button to play.
            ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        }
    }
}

void MainWindow::durationChanged(quint64 duration)
{
    Mduration=duration/1000;
    ui->Seek->setMaximum(Mduration);
}

void MainWindow::positionChanged(quint64 progress)
{
    if (!ui->Seek->isSliderDown())
    {
        ui->Seek->setValue(progress/1000);
    }
    updateduration(progress/1000);
}

void MainWindow::on_actionOpen_triggered()
{
    QString Filename = QFileDialog::getOpenFileName(this,tr("Select Audio File"),"",tr("MP3 Files (*.mp3)"));
    MPlayer->setSource(QUrl(Filename));
    MPlayer->play();
    QFileInfo fileinfo(Filename);
    ui->label->setText(fileinfo.baseName());
    std::ofstream fout("LastPlayed.txt");  // write last played file to txt for next time.
    fout << Filename.toStdString();
    fout.close();
}

void MainWindow::on_pushButton_PlayPause_clicked()
{
    if (MPlayer->isPlaying()){
        MPlayer->pause();
        ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }
    else{
        MPlayer->play();
        ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
}

void MainWindow::on_pushButton_SeekForward_clicked()
{
    ui->Seek->setValue(ui->Seek->value()+5);
    MPlayer->setPosition(ui->Seek->value()*1000);
}

void MainWindow::on_pushButton_SeekBackward_clicked()
{
    ui->Seek->setValue(ui->Seek->value()-5);
    MPlayer->setPosition(ui->Seek->value()*1000);
}

void MainWindow::on_pushButton_Mute_clicked()
{
    if (audioOutput->isMuted()){
        audioOutput->setMuted(false);
        ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    }
    else{
        audioOutput->setMuted(true);
        ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
    }
}

void MainWindow::on_Seek_sliderMoved(int value)
{
    MPlayer->setPosition(value*1000);
}

void MainWindow::on_Volume_valueChanged(int value)
{
    audioOutput->setVolume(value/1000.0);  // exaggerated value because 100 was too loud lol
}

