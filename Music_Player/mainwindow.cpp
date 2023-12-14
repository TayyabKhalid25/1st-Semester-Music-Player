#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qfiledialog.h"
#include "qstyle.h"
#include "QMediaPlayer"
#include "qaudio.h"
#include "QAudioOutput"
#include "QAudioOutput.h"
#include <fstream>
#include <random>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Linking Media Player and Audio Output to enable audio playback.
    MPlayer = new QMediaPlayer;  // Controls player features like pause, play, seek.
    audioOutput = new QAudioOutput;  // Controls audio output features like volume and muting.
    MPlayer->setAudioOutput(audioOutput);
    playlistWidget = ui->playlistWidget;  // Links playlist Widget with a variable.
    // Setting of Icons on Push Buttons of GUI.
    QIcon repeat(QDir(QCoreApplication::applicationDirPath()).filePath("arrows-repeat.png"));
    ui->pushButton_Playback->setIcon(repeat);
    ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_SeekBackward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_SeekForward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->pushButton_MediaBackward->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
    ui->pushButton_MediaForward->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
    ui->pushButton_AddMedia->setIcon(style()->standardIcon(QStyle::SP_DialogOpenButton));
    ui->pushButton_RemoveMedia->setIcon(style()->standardIcon(QStyle::SP_DialogDiscardButton));
    // Setting Initial Volume of player.
    audioOutput->setVolume(ui->Volume->value()/1000.0);
    // Connect basically connects various functions to signals of GUI.
    connect(MPlayer,QMediaPlayer::durationChanged,this,&MainWindow::durationChanged);
    connect(MPlayer,QMediaPlayer::positionChanged,this,&MainWindow::positionChanged);
    // Syncing Current Time and Duration of audio file with Seek Slider.
    ui->Seek->setRange(0,MPlayer->duration()/1000);
    // Using File Handling to get Recent playlist on startup.
    loadPlaylist();
}

MainWindow::~MainWindow()  // On Window Close.
{
    savePlaylist();
    delete ui;
}

void MainWindow::PlaySong(const QString &file)  // Play audio file, change icon and set current file name.
{
    // QString is basically Unicode String that all Qt functions use.
    MPlayer->setSource(QUrl(file));  // Returns File Path.
    MPlayer->play();
    ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    QFileInfo fileinfo(file);
    ui->label->setText(fileinfo.baseName());  // Returns only the File Name.
}

void MainWindow::updateduration(quint64 duration)  // Function where current time and duration of audio file is calculated.
{
    if (duration || Mduration)
    {
        QTime CurrentTime((duration/3600)%60,(duration/60)%60,duration%60,(duration*1000)%1000);
        QTime totalTime((Mduration/3600)%60,(Mduration/60)%60,Mduration%60,(Mduration*1000)%1000);
        QString format = "mm:ss";
        if(Mduration>3600)  // If audio file is larger than an hour, use hour format
            format="hh:mm:ss";
        ui->label_2->setText(CurrentTime.toString(format));
        ui->label_3->setText(totalTime.toString(format));
        if (CurrentTime == totalTime)  // When audio finishes.
            selectSong();
    }
}

void MainWindow::selectSong()  // Determines what to do based on playback mode.
{
    if (isRepeatAll)
        on_pushButton_MediaForward_clicked();
    else if (isRepeatOne)
        PlaySong(playlistWidget->item(currentSong())->data(Qt::UserRole).toString());
    else if (isRandomPlay)
    {
        std::random_device rn;  // random num generator.
        PlaySong(playlistWidget->item(rn() % playlistWidget->count())->data(Qt::UserRole).toString());
    }
}

void MainWindow::durationChanged(quint64 duration)  // If file changed, update duration.
{
    Mduration=duration/1000;
    ui->Seek->setMaximum(Mduration);
}

void MainWindow::positionChanged(quint64 progress)  // If seek slider held by mouse, update current time.
{
    if (!ui->Seek->isSliderDown())
    {
        ui->Seek->setValue(progress/1000);
    }
    updateduration(progress/1000);
}

void MainWindow::on_pushButton_AddMedia_clicked()  // When File Open option is used.
{
    QStringList Filepaths = QFileDialog::getOpenFileNames(this,tr("Select one or more Audio Files"),"",tr("Audio Files (*.mp3 *.wav)"));
    if (!Filepaths.isEmpty())
    {
        for (const QString &filepath : Filepaths)
        {
            QFileInfo fileinfo(filepath);
            QList<QListWidgetItem *> foundItems = ui->playlistWidget->findItems(fileinfo.baseName(), Qt::MatchExactly);
            if (foundItems.isEmpty())  // Condition for finding whether songs already exist or not.
            {
                QListWidgetItem *item = new QListWidgetItem(fileinfo.baseName());  // Name of audiofile.
                item->setData(Qt::UserRole,filepath);  // Location of audiofile stored seperately.
                playlistWidget->addItem(item);
            }
        }
        savePlaylist();
    }
}

void MainWindow::on_playlistWidget_itemDoubleClicked()  // Double click on songs to open them.
{
    QListWidgetItem *item = playlistWidget->currentItem();
    if (item)  // Ensures its not an empty list.
    {
        PlaySong(item->data(Qt::UserRole).toString());  // Parsing data from item.(File Location)
    }
}

int MainWindow::currentSong()  // Determines and syncs the index of current song being played with playlistWidget.
{
    int index;
    bool found = false;
    for (index = 0; index < playlistWidget->count();index++)
    {
        if (playlistWidget->item(index)->text() == ui->label->text())
        {
            found = true;
            break;
        }
    }
    if (found)
        return index;
    else
        return -1;
}

void MainWindow::savePlaylist()  // Save all items in playlistWidget to file.
{
    QFile file("Playlist.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        for (int i = 0; i < playlistWidget->count(); ++i)
        {
            QByteArray name = playlistWidget->item(i)->text().toUtf8();
            stream << name.constData() << "\n" << playlistWidget->item(i)->data(Qt::UserRole).toString() << "\n";
        }
        file.close();
    }
}

void MainWindow::loadPlaylist()  // Load all items from file to playlistWidget.
{
    QFile file("Playlist.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        while (!stream.atEnd())
        {
            QString filename = stream.readLine();
            QString filepath = stream.readLine();
            QListWidgetItem *item = new QListWidgetItem(filename);
            item->setData(Qt::UserRole, filepath);
            playlistWidget->addItem(item);
        }
        file.close();
    }
}

void MainWindow::on_pushButton_PlayPause_clicked()  // Play Pause button.
{
    if (MPlayer->isPlaying() || !MPlayer->isSeekable())
    {
        MPlayer->pause();
        ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }
    else
    {
        MPlayer->play();
        ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
}

void MainWindow::on_pushButton_SeekForward_clicked()  // Forward 5 seconds button.
{
    ui->Seek->setValue(ui->Seek->value()+5);
    MPlayer->setPosition(ui->Seek->value()*1000);
}

void MainWindow::on_pushButton_SeekBackward_clicked()  // Backward 5 seconds button.
{
    ui->Seek->setValue(ui->Seek->value()-5);
    MPlayer->setPosition(ui->Seek->value()*1000);
}

void MainWindow::on_pushButton_MediaForward_clicked()  // Next File.
{
    if (playlistWidget->count() != 0)
    {
        int current = currentSong();
        if ((current == playlistWidget->count() - 1) || (current == -1))  // Also checks if current song is removed from playlist.
            PlaySong(playlistWidget->item(0)->data(Qt::UserRole).toString());  // Loop around.
        else
            PlaySong(playlistWidget->item(currentSong()+1)->data(Qt::UserRole).toString());  // Next File.
    }
}

void MainWindow::on_pushButton_MediaBackward_clicked()  // Previous File.
{
    if (playlistWidget->count() != 0)
    {
        int current = currentSong();
        if (current == 0)
            PlaySong(playlistWidget->item(playlistWidget->count()-1)->data(Qt::UserRole).toString());  // Loop around.
        else if (current == -1)
            PlaySong(playlistWidget->item(0)->data(Qt::UserRole).toString());
        else
            PlaySong(playlistWidget->item(currentSong()-1)->data(Qt::UserRole).toString());  // Previous File.
    }
}

void MainWindow::on_pushButton_RemoveMedia_clicked()  // Remove selected items from playlist.
{
    QList<QListWidgetItem*> items = playlistWidget->selectedItems();
    if (!items.empty())
    {
        for (QListWidgetItem *item:items)
        {
            delete playlistWidget->takeItem(playlistWidget->row(item));
        }
    }
}

void MainWindow::on_pushButton_Playback_clicked()  // Toggle Playback modes.
{
    QIcon repeat(QDir(QCoreApplication::applicationDirPath()).filePath("arrows-repeat.png"));
    QIcon repeatOne(QDir(QCoreApplication::applicationDirPath()).filePath("arrows-repeat-1.png"));
    QIcon shuffle(QDir(QCoreApplication::applicationDirPath()).filePath("shuffle.png"));

    if (isRepeatAll)
    {
        isRepeatAll = false;
        isRepeatOne = true;
        ui->pushButton_Playback->setIcon(repeatOne);
    }
    else if (isRepeatOne)
    {
        isRepeatOne = false;
        isRandomPlay = true;
        ui->pushButton_Playback->setIcon(shuffle);
    }
    else if (isRandomPlay)
    {
        isRandomPlay = false;
        isRepeatAll = true;
        ui->pushButton_Playback->setIcon(repeat);
    }
}

void MainWindow::on_pushButton_Mute_clicked()  // Mute/Unmute player.
{
    if (audioOutput->isMuted())
    {
        audioOutput->setMuted(false);
        ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    }
    else
    {
        audioOutput->setMuted(true);
        ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
    }
}

void MainWindow::on_Seek_sliderMoved(int value)  // If seek slider moved, update player time/position.
{
    if (value < ui->Seek->maximum())
        MPlayer->setPosition(value*1000);
}

void MainWindow::on_Volume_valueChanged(int value)  // Change volume when slider value change.
{
    // This function takes values from 0.0 to 1.0 as input.
    audioOutput->setVolume(value/1000.0);  // Exaggerated value because 100 was too loud lol
}
