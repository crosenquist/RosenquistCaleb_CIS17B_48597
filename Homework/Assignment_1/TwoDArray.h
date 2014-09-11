#ifndef TWODARRAY_H
#define TWODARRAY_H

#include <iostream>
#include <cstdlib>   // Needed for the exit function
#include <string>

class TwoDArray
{
private:
    int numRows;  //number of rows
    int numCols;  //number of columns
    int **array;  //the 2-Dimensional array

public:
    TwoDArray(int,int);             //Constructor
    std::string toString(int,int);
    void destroy(int **,int);
    void printArray(int**,int,int);
    int **getArray();
    void destroy();
};

#endif // TWODARRAY_H
