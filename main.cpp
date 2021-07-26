#include "mainwindow.h"
#include <QSplashScreen>
#include<QTimer>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen * telaSplash = new QSplashScreen;

    telaSplash->setPixmap(QPixmap(":/imgs/images/logo.png"));
    telaSplash->show();

    MainWindow w;

    QTimer::singleShot(5000,telaSplash, SLOT(close()));
    QTimer::singleShot(5000,&w, SLOT(show()));

    return a.exec();
}
