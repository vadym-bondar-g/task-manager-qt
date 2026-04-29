//
// Created by user on 4/28/26.
//
#include <QApplication>
#include<QLabel>
#include<QWidget>
#include <QFile>
#include <QString>
#include <QVBoxLayout>
#include "main.h"



void loadStyle(QApplication &app,const QString &stylePath) {
    QFile file(stylePath);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QString style = file.readAll();
        app.setStyleSheet(style);
    }
};
void checkLoadStyle() {
    QFile file(":/style/style.qss");
    qDebug()<<"exists:"<<file.exists();
    if (file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug()<<"opened";
    }
    else {
        qDebug()<<"open failed";
    }
}
int main(int argc, char *argv[]){
QApplication app(argc, argv);
    QWidget window;
    window.setWindowFlags(Qt::FramelessWindowHint);
    window.setAttribute(Qt::WA_TranslucentBackground);
    QVBoxLayout *layout = new QVBoxLayout(&window);
    QWidget *topBar = new QWidget();
    topBar->setFixedHeight(40);
    topBar->setStyleSheet(R"(background-color: rgba(20, 20, 20 ,120);
                            border-top-left-radius:10px;
                            border-top-right-radius:10px;
                          )");

 // loadStyle(app,":/styles/styles.qss");checkLoadStyle();
QLabel *label = new QLabel("Yet another Task Manager");
    label->setStyleSheet("color:white;");
    layout->addWidget(topBar);
    layout->addWidget(label);
window.resize(800,600);
    window.show();

    app.setStyleSheet(R"(
QMainWindow {
    background-color: #0b0f14;
}

QFrame {
    background-color: rgba(20, 30, 45, 180);
    border: 1px solid rgba(0, 170, 255, 120);
    border-radius: 14px;
}

QPushButton {
    background-color: rgba(10, 20, 35, 200);
    color: #cfe8ff;
    border-radius: 10px;
}
)");



return app.exec();}
