#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}


//#include <QCoreApplication>
//#include <unistd.h>
//#include <mraa/gpio.h>

//int main(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);

//    // 初始化GPIO
//    mraa_gpio_context gpio;
//    int pin = 38; // 根据实际情况设置GPIO引脚编号
//    gpio = mraa_gpio_init(pin);
//    if (gpio == NULL) {
//        qDebug("mraa_gpio_init failed");
//        return -1;
//    }

//    // 设置GPIO为输出模式
//    mraa_gpio_dir(gpio, MRAA_GPIO_OUT);

//    // 点亮LED灯
//    for (;;) {
//        mraa_gpio_write(gpio, 1);
//        sleep(1);
//        mraa_gpio_write(gpio, 0);
//        sleep(1);
//    }

//    return a.exec();
//}
