
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
        array=new int*[numRows];
        for(int row=0;row<numRows;row++){
            array[row]=new int[numCols];
        }
        //Fill the array with random 2 digit numbers
        for(int row=0;row<numRows;row++){
            for(int col=0;col<numCols;col++){
                array[row][col]=rand()%90+10;
            }
        }

        /*
        //Print the Array
        std::cout<<std::endl;
        for(int row=0;row<numRows;row++){
            for(int col=0;col<numCols;col++){
                std::cout<<array[row][col]<<" ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
        */
}

std::string TwoDArray::toString(int numRows, int numCols){
    std::stringstream ss;

    ss << "<h1><center>2D-Array</center></h1><br>";

    //Create the HTML table for the stringstream
    ss << "<table width='200' border='1'>";

    for(int j=0;j<numCols;j++){
        ss << "<tr>";
        for(int i=0;i<numRows;i++){
            ss << "<th>" << array[j][i] << "</th>";

        }
        ss << "</tr>";
    }

    return ss.str() ;
}

int **TwoDArray::getArray(){
    return array;
}

void TwoDArray::destroy(){
    //Destroy cols
    for(int row=0;row<numRows;row++){
        delete []array[row];
    }
    //Destroy row pointers
    delete []array;
}

