#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*! TODO: los numeros no se pueden repetir por lo que tenemos que crear un
 * algoritmo para eso
 * \todo Todo description here
 */
void addSpaces(int a);
bool hasRepeatedNum(int*, int*, int);

int main(int argc, char* argv[])
{
    int  len;
    int  sum     = 0;
    int  initial = 0;
    int  sumCols;
    int  sumRows;
    int  leftDiagonal  = 0;
    int  rightDiagonal = 0;
    int* nums;
    int  aux;
    bool isMagic = true;

    printf("Ingrese la dimension del cuadrado: ");
    scanf("%d", &len);

    int array[len][len];
    nums = (int*)calloc(len, sizeof(int));

    printf("Ingrese los datos\n");
    for (int i = 0; i < len; i++)
    {
        sum = 0;
        for (int j = 0; j < len; j++)
        {
            printf("\tvalor [%d][%d]: ", i, j);
            scanf("%d", &aux);
            *(nums + i * len + j) = aux;

            if (hasRepeatedNum(nums, (nums + i * len + j), aux))
                isMagic = false; // Por si un numero ya se introdujo

            if (i < 1) // la cuenta inicial
                initial += aux;
        }
        printf("\n");
    }

    for (int i = 0; i < len; i++)
    {
        sumCols = 0;
        sumRows = 0;
        for (int j = 0; j < len; j++)
        {
            sumCols += *(nums + (i * len) + j); // suma de columnas
            sumRows += *(nums + (j * len) + i); // suma de filas
        }
        leftDiagonal +=
            *(nums + (i * len) + i); // diagonal de izquierda a derecha
        rightDiagonal +=
            *(nums + (i * len) + ((len - 1) - i)); // de derecha a izquierda

        printf("sumCols: %d<<<\n", sumCols);
        if (sumCols != initial || sumRows != initial)
        {
            isMagic = false;
            break;
        }
    }

    if (leftDiagonal != initial || rightDiagonal != initial)
        isMagic = false;

    if (isMagic)
        printf("Al fin carajo\n");
    else
        printf("No pues no\n");

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

bool hasRepeatedNum(int* ptr, int* end, int n)
{
    while (ptr < end)
    {
        if (*ptr == n)
            return true;
        ptr++;
    }

    return false;
}
