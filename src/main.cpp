//
// Created by user on 4/28/26.
//
#include <QApplication>
#include <QMessageBox>
#include<QWidget>

#include "main.h"


int main(int argc, char *argv[]){
QApplication app(argc, argv);
QLabel label("Yet another Task Manager");
label.show();


return app.exec();}
