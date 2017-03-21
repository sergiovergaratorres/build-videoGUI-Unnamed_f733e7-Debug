/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionFullScreen;
    QAction *actionOpen;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionColour;
    QAction *actionArrow;
    QAction *actionLine;
    QAction *actionCurvedLine;
    QAction *actionCircle;
    QAction *actionSquare;
    QAction *actionReDo;
    QAction *actionDottedLine;
    QAction *actionMovieEditor;
    QAction *actionFinder;
    QAction *actionSetVolume;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuAyuda;
    QMenu *menuCapture;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(823, 588);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/375.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Icons8-Windows-8-Media-Controls-Pause.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon1);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/player-stop-frame-video-music-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon2);
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QStringLiteral("actionFullScreen"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/159121.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon3);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/open_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon4);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        actionColour = new QAction(MainWindow);
        actionColour->setObjectName(QStringLiteral("actionColour"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/_color_palette-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColour->setIcon(icon5);
        actionArrow = new QAction(MainWindow);
        actionArrow->setObjectName(QStringLiteral("actionArrow"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/Arrows.icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArrow->setIcon(icon6);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QStringLiteral("actionLine"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/Icons8-Ios7-Editing-Line.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon7);
        actionCurvedLine = new QAction(MainWindow);
        actionCurvedLine->setObjectName(QStringLiteral("actionCurvedLine"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/curved-black-line-clip-art-at-clker-com-vector-clip-art-online-rIt2rw-clipart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCurvedLine->setIcon(icon8);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QStringLiteral("actionCircle"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/circle-icon-0.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon9);
        actionSquare = new QAction(MainWindow);
        actionSquare->setObjectName(QStringLiteral("actionSquare"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/shape_square-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSquare->setIcon(icon10);
        actionReDo = new QAction(MainWindow);
        actionReDo->setObjectName(QStringLiteral("actionReDo"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/redo-icon-24337.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReDo->setIcon(icon11);
        actionDottedLine = new QAction(MainWindow);
        actionDottedLine->setObjectName(QStringLiteral("actionDottedLine"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/10513.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDottedLine->setIcon(icon12);
        actionMovieEditor = new QAction(MainWindow);
        actionMovieEditor->setObjectName(QStringLiteral("actionMovieEditor"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/Entertainment_film_film_reel_film_roll_movie_reel_roll_theate-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMovieEditor->setIcon(icon13);
        actionFinder = new QAction(MainWindow);
        actionFinder->setObjectName(QStringLiteral("actionFinder"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/Magnifying_glass_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFinder->setIcon(icon14);
        actionSetVolume = new QAction(MainWindow);
        actionSetVolume->setObjectName(QStringLiteral("actionSetVolume"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/media-volume-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetVolume->setIcon(icon15);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 823, 22));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        menuCapture = new QMenu(menuBar);
        menuCapture->setObjectName(QStringLiteral("menuCapture"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::BottomToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::RightToolBarArea, toolBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuCapture->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        mainToolBar->addAction(actionFinder);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMovieEditor);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPlay);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionStop);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSetVolume);
        mainToolBar->addAction(actionFullScreen);
        toolBar->addAction(actionColour);
        toolBar->addAction(actionArrow);
        toolBar->addAction(actionReDo);
        toolBar->addAction(actionLine);
        toolBar->addAction(actionCurvedLine);
        toolBar->addAction(actionDottedLine);
        toolBar->addAction(actionCircle);
        toolBar->addAction(actionSquare);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        actionFullScreen->setText(QApplication::translate("MainWindow", "FullScreen", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFullScreen->setToolTip(QApplication::translate("MainWindow", "Pantalla Completa", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Abrir video", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", Q_NULLPTR));
        actionGuardar->setText(QApplication::translate("MainWindow", "Guardar", Q_NULLPTR));
        actionColour->setText(QApplication::translate("MainWindow", "Colour", Q_NULLPTR));
        actionArrow->setText(QApplication::translate("MainWindow", "Arrow", Q_NULLPTR));
        actionLine->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        actionCurvedLine->setText(QApplication::translate("MainWindow", "CurvedLine", Q_NULLPTR));
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", Q_NULLPTR));
        actionSquare->setText(QApplication::translate("MainWindow", "Square", Q_NULLPTR));
        actionReDo->setText(QApplication::translate("MainWindow", "ReDo", Q_NULLPTR));
        actionDottedLine->setText(QApplication::translate("MainWindow", "DottedLine", Q_NULLPTR));
        actionMovieEditor->setText(QApplication::translate("MainWindow", "MovieEditor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMovieEditor->setToolTip(QApplication::translate("MainWindow", "Iniciar Movie Editor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionFinder->setText(QApplication::translate("MainWindow", "Finder", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFinder->setToolTip(QApplication::translate("MainWindow", "Iniciar Finder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSetVolume->setText(QApplication::translate("MainWindow", "SetVolume", Q_NULLPTR));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo ", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", Q_NULLPTR));
        menuCapture->setTitle(QApplication::translate("MainWindow", "Capturar", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Editar", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
