
#include "TwoDArray.h"
#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>


TwoDArray::TwoDArray(int numRows, int numCols)
{
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
}

char *TwoDArray::toString(){

}
