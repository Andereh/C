#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*! TODO: los numeros no se pueden repetir por lo que tenemos que crear un
 * algoritmo para eso
 * \todo Todo description here
 */
void addSpaces(int a);
void noRepeatedNum(int*, int*);

int main(int argc, char* argv[])
{

    /*int** array;*/

    int  len;
    int  aux;
    int  sum = 0;
    int  m   = 0;
    int  sumCols;
    int  sumRows;
    int  leftDiagonal  = 0;
    int  rightDiagonal = 0;
    int* nums;

    printf("Ingrese la dimension del cuadrado: ");
    scanf("%d", &len);

    int array[len][len];
    nums = (int*)calloc(len, sizeof(int));

    /*array = calloc(len, sizeof *array);*/
    /*for (int i = 0; i < len; i++)*/
    /*{*/
    /*array[i] = calloc(len, sizeof *(array[i]));*/
    /*}*/

    printf("Ingrese los datos\n");
    for (int i = 0; i < len; i++)
    {
        sum = 0;
        for (int j = 0; j < len; j++)
        {
            printf("valor [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
            nums[i * len + j] = array[i][j];

            /*printf("%d\n", (int)((*array) + j + i * len));*/
            /*printf("%d\n", (int)&array[i][j]);*/
            if (i < 1)
                m += aux;
        }
        printf("\n");
    }
    /*printf("%d<<\n", ((int)(array[len - 1][len - 1]) - (int)(array[0][0])));*/
    /*printf("%d<<<-\n", *((array[1]) + 1));*/

    for (int i = 0; i < len; i++)
    {
        sumCols = 0;
        sumRows = 0;
        for (int j = 0; j < len; j++)
        {
            sumCols += array[i][j];
            sumRows += array[j][i];
        }
        leftDiagonal += array[i][i];
        rightDiagonal += array[i][2 - i];

        if (sumCols != m || sumRows != m)
            printf("Oops\n");
        else
            printf("Ook\n");
    }
    printf("%d\n", leftDiagonal);
    printf("%d\n", rightDiagonal);
    return 0;
}

void addSpaces(int a)
{
    int  len;
    char str[10];

    sprintf(str, "%d", a);
    len = 4 - strlen(str);
    for (int i = 0; i < len; i++)
    {
        printf("-");
    }
}

void noRepeatedNum(int* ptr, int* end) {}
