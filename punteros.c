#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int* arr;
    int* ptr;
    int  cols = 3;
    int  rows = 3;

    arr = (int*)calloc(cols * rows, sizeof(int));

    ptr = arr;

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            arr[i * cols + j] = 100 + j + i * rows;
            // el 100 no hace nada, solo para verlos mejor

            printf("%d << ", arr[i * cols + j]);
            printf("%d << ", (int)(arr + i * cols + j));
            printf("%d\n", (int)&arr[i * cols + j]);
        }
        printf("\n");
    }

    for (int i = 0; i < cols * rows; ++i)
    {
        /*printf("%d << ", *ptr++);*/
        /*printf("%d\n", (int)ptr);*/
    }
    return 0;
}
