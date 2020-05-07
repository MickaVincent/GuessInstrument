#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_reloadButton_clicked();

    void on_guitareButton_clicked();

    void on_cornemuseButton_clicked();

    void on_harpeButton_clicked();

    void on_accordeonButton_clicked();

    void on_castagnettesButton_clicked();

    void on_clavesButton_clicked();

    void on_maracasButton_clicked();

    void on_trompetteButton_clicked();

    void on_tambourButton_clicked();

    void on_reloadButton_2_clicked();

    void setVolume(int volume);

    void on_pauseButton_clicked();

    void on_harmonicaButton_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QString fileGuess;
};
#endif // MAINWINDOW_H
