#ifndef TWODARRAY_H
#define TWODARRAY_H

class TwoDArray
{
private:
    int numRows;  //number of rows
    int numCols;  //number of columns
    int **array;  //the 2-Dimensional array

public:
    TwoDArray(int,int);
    char *toString();
    void destroy(int **,int);
};

#endif // TWODARRAY_H
