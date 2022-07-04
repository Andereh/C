#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int* a;
    int  cols = 4;
    int  rows = 5;


    int** own;
    cout << sizeof *own;

    own = (int*)calloc(cols, sizeof *own);
    for (int i = 0; i < cols; i++)
    {
        own[i] = (int*)calloc(rows, sizeof *(own[i]));
    }

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            own[i][j] = j + i * rows;
        }
    }
    return 0;
}
