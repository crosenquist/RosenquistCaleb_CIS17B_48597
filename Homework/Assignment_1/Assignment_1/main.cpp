/*
 * Caleb Patrick Rosenquist
 * September 3rd, 2014
 * Purpose: Assignment 1
*/

/*#include <stdlib.h>
#include <iostream>
#include <QApplication>
#include <QLabel>
namespace std


int main(int argc, char *argv[]){
    cout << "Hello World" << endl;
}
*/

#include <QApplication>
#include <QLabel>
#include <iostream>
#include <cstdlib>

#include <TwoDArray.h>
using namespace std;

int main(int argc, char *argv[])
{
    /*QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello Qt!");
    label->show();
    return app.exec();*/

    int rows = 10;
    int cols = 10;

    TwoDArray numberArray(rows, cols);
    //numberArray.printArray();
    //cout << "Hello User" << endl;
}
