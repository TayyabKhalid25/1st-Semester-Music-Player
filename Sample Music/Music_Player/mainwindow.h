#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void durationChanged(quint64 duration);

    void positionChanged(quint64 progress);

    void on_pushButton_PlayPause_clicked();

    void on_pushButton_SeekForward_clicked();

    void on_pushButton_SeekBackward_clicked();

    void on_pushButton_Mute_clicked();

    void on_actionOpen_triggered();

    void on_Seek_sliderMoved(int value);

    void on_Volume_valueChanged(int value);

private:
    void updateduration(quint64 duration);
    Ui::MainWindow *ui;
    QMediaPlayer *MPlayer;
    QString FileName;
    QAudioOutput *audioOutput;
    quint64 Mduration;

};
#endif // MAINWINDOW_H
