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
    int rows = 10;
    int cols = 10;

    TwoDArray numberArray(rows, cols);
    string array = numberArray.toString(rows, cols);

    QApplication app(argc, argv);
    QLabel *label = new QLabel(array.c_str()); //Converting the string into a character array before passing it in.
    label->show();
    return app.exec();

    numberArray.destroy(); //destroys the memory allocated for the 2D array.
}
