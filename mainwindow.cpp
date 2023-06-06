#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMainWindow>
#include <QCoreApplication>
#include "ui_mainwindow.h"
#include <QLibrary>
#include <QDebug>
#include <QWidget>
#include <mraa/common.hpp>
#include <mraa/gpio.hpp>
#include <mraa/i2c.hpp>

#define LED_PN  40
mraa::Result status;
mraa::Gpio led(LED_PN);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int Mraa_obj_init() {

    status = led.dir(mraa::DIR_OUT);
    if (status != mraa::SUCCESS) {
        qDebug("set direction failed !\n");
        return EXIT_FAILURE;
    }
}


int MainWindow::on_pushButton_clicked()
{


    status = led.write(1);
    if (status != mraa::SUCCESS) {
        qDebug("write failed !\n");
        return EXIT_FAILURE;
    }

    qDebug("success !\n");

    return 0;
}

int MainWindow::on_pushButton_2_clicked()
{

    status = led.write(0);
    if (status != mraa::SUCCESS) {
        qDebug("write failed !\n");
        return EXIT_FAILURE;
    }

    qDebug("success !\n");

    return 0;
}
