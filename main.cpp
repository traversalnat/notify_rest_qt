#include "notifywindow.h"
#include <QApplication>
#include <QScreen>
#include <QGuiApplication>
#include <QLabel>
#include <QGraphicsBlurEffect>
#include <QPalette>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NotifyWindow w;

    w.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
    w.showFullScreen();
    return a.exec();
}
