#include "widget.h"
#include "ui_widget.h"
#include <QMediaPlayer>
#include <QFileDialog>
#include <QVideoWidget>
#include <QGraphicsView>
#include <QGraphicsVideoItem>
#include <QGraphicsScene>
#include <QResizeEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    vid = new QGraphicsVideoItem();   
    //vid->setAspectRatioMode(Qt::IgnoreAspectRatio);
    player->setVideoOutput(vid);
    escena = new QGraphicsScene(this);
    escena->setSceneRect(0,0,0,0);
    ui->graphicsView->setScene(escena);
    ui->graphicsView->scene()->addItem(vid);
    vid->setAspectRatioMode(Qt::IgnoreAspectRatio);
    vid->setSize(QSizeF(1200,600));

    vid->show();

    connect (player, &QMediaPlayer::positionChanged, [&](qint64 pos){
        ui->tiempo->setValue(pos);
    });
    connect (player, &QMediaPlayer::durationChanged, [&](qint64 dur){
        ui->tiempo->setMaximum(dur);
    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_abrir_clicked()
{
   QString filename = QFileDialog::getOpenFileName(this, "Abrir");
    if (filename.isEmpty()){
        return;
    }

    player -> setMedia(QUrl::fromLocalFile(filename));
    player -> setVolume(ui->volumen->value());
    on_play_clicked();
}

void Widget::on_play_clicked()
{
    player -> play();
}

void Widget::on_stop_clicked()
{
    player -> stop();
}

void Widget::on_mute_clicked()
{
    if (player->isMuted()){
        player -> setMuted(false);
    } else {
        player -> setMuted(true);
    }
}

void Widget::on_volumen_valueChanged(int value)
{
    player -> setVolume(value);
}

void Widget::on_pause_clicked()
{
    player -> pause();
}

