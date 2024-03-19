#include <iostream>
#include "qapplication.h"
#include "QMainWindow"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow w;
    w.resize(800, 600);
    w.show();
    std::cout << "Hello world!" << std::endl;
    return a.exec();
}
