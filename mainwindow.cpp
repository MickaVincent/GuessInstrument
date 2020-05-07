#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDirIterator>
#include <QSound>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->player = new QMediaPlayer();

    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),this->player, SLOT(setVolume(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_reloadButton_clicked()
{
    int counter = 0;
    int rand = qrand()%10;
    QDirIterator it(":/Resources/sound/", QStringList() << "*.wav", QDir::Files, QDirIterator::Subdirectories);
    it.next();
    while(counter != rand){
        counter++;
        it.next();
    }
    this->fileGuess = it.path();
    this->fileGuess.append(it.fileName());
    qDebug() << this->fileGuess;
}

void MainWindow::on_guitareButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Guitare.wav"));
    this->player->setVolume(20);
    this->player->play();

}

void MainWindow::on_cornemuseButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Cornemuse.wav"));
    this->player->setVolume(100);
    this->player->play();

}

void MainWindow::on_harpeButton_clicked()
{

    this->player->setMedia(QUrl("qrc:/Resources/sound/Harpe.wav"));
    this->player->setVolume(20);
    this->player->play();
}

void MainWindow::on_accordeonButton_clicked()
{

    this->player->setMedia(QUrl("qrc:/Resources/sound/Accordéon.wav"));
    this->player->setVolume(20);
    this->player->play();
}

void MainWindow::on_castagnettesButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Castagnette.wav"));
    this->player->setVolume(20);
    this->player->play();
}

void MainWindow::on_clavesButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Claves.wav"));
    this->player->setVolume(20);
    this->player->play();
}

void MainWindow::on_maracasButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Maracas.wav"));
    this->player->setVolume(20);
    this->player->play();
}

void MainWindow::on_trompetteButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Trompette.wav"));
    this->player->setVolume(20);
    this->player->play();
}

void MainWindow::on_tambourButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Tambour.wav"));
    this->player->setVolume(20);
    this->player->play();
}

void MainWindow::on_reloadButton_2_clicked()
{

    QString prefix = "qrc";
    QUrl soundGuess = prefix.append(this->fileGuess);
    this->player->setMedia(soundGuess);
    this->player->setVolume(30);
    this->player->play();
}

void MainWindow::setVolume(int volume)
{
    qDebug() << "Changing volume to ";
    qDebug() << volume;
    this->player->setVolume(volume);
}

void MainWindow::on_pauseButton_clicked()
{
    this->player->stop();
}

void MainWindow::on_harmonicaButton_clicked()
{
    this->player->setMedia(QUrl("qrc:/Resources/sound/Harmonica.wav"));
    this->player->setVolume(20);
    this->player->play();
}
