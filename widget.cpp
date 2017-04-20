#include "widget.h"
#include "ui_widget.h"
#include <QMediaPlayer>
#include <QFileDialog>
#include <QVideoWidget>
#include <QGraphicsView>
#include <QGraphicsVideoItem>
#include <QGraphicsScene>
#include <QTime>
#include <QElapsedTimer>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    int m_timerId;
    qint64 m_accumulator;
    QElapsedTimer m_timer;
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
    m_accumulator = 0;
    m_timer.restart();
    if (m_timerId == -1) m_timerId = startTimer(50);
    player -> play();

}

void Widget::on_stop_clicked()
{
    player -> stop();
    m_accumulator = 0;
    m_timer.hasExpired(true);
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
    if (m_timer.isValid()) {
                m_accumulator += m_timer.elapsed();
                m_timer.invalidate();
            } else {
                m_timer.restart();
                m_timerId = startTimer(50);
            }
    player -> pause();

}
void Widget::timerEvent(QTimerEvent *ev){
    if (ev->timerId() != m_timerId) {
                QWidget::timerEvent(ev);
                return;
            }
            QTime t(0,0);
            t = t.addMSecs(m_accumulator);
            if (m_timer.isValid()) {
                t = t.addMSecs(m_timer.elapsed());
            } else {
                killTimer(m_timerId);
                m_timerId = -1;
            }
            ui->timeStamp->setText(t.toString("h:m:ss.zzz"));

}


