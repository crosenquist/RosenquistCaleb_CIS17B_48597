
#include "TwoDArray.h"

#include <QApplication>
#include <QLabel>
#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>


TwoDArray::TwoDArray(int numRows, int numCols)
{
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare the 2-D Array
        int ** array=new int*[numRows];
        for(int row=0;row<numRows;row++){
            array[row]=new int[numCols];
        }
        //Fill the array with random 2 digit numbers
        for(int row=0;row<numRows;row++){
            for(int col=0;col<numCols;col++){
                array[row][col]=rand()%90+10;
            }
        }

        //Print the Array
        std::cout<<std::endl;
        for(int row=0;row<numRows;row++){
            for(int col=0;col<numCols;col++){
                std::cout<<array[row][col]<<" ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
}

string TwoDArray::toString(int numRows, int numCols){
    stringstream ss;

    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCols;j++){

        }
    }
}

/*void printArray(int**array,int numRows,int numCols){
    //Print the Array
    cout<<endl;
    for(int row=0;row<numRows;row++){
        for(int col=0;col<numCols;col++){
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}*/
