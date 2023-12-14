#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:  // All functions inside mainwindow.cpp
    void PlaySong(const QString &file);

    void durationChanged(quint64 duration);

    void positionChanged(quint64 progress);

    void on_pushButton_PlayPause_clicked();

    void on_pushButton_SeekForward_clicked();

    void on_pushButton_SeekBackward_clicked();

    void on_pushButton_Mute_clicked();

    void on_Seek_sliderMoved(int value);

    void on_Volume_valueChanged(int value);

    void savePlaylist();

    void loadPlaylist();

    void on_pushButton_AddMedia_clicked();

    void on_pushButton_MediaBackward_clicked();

    void on_pushButton_MediaForward_clicked();

    void on_pushButton_RemoveMedia_clicked();

    void on_playlistWidget_itemDoubleClicked();

    int currentSong();

    void selectSong();

    void on_pushButton_Playback_clicked();

private:  // Global Variables
    void updateduration(quint64 duration);
    Ui::MainWindow *ui;
    QMediaPlayer *MPlayer;
    QAudioOutput *audioOutput;
    QListWidget *playlistWidget;
    quint64 Mduration;
    bool isRepeatAll = true;
    bool isRepeatOne = false;
    bool isRandomPlay = false;

};
#endif // MAINWINDOW_H
