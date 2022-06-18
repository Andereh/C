#include <stdio.h>

int n;
int inv;

int main()
{
    do 
    {
        printf("Introduce un numero de 3 cifras: ");
        scanf("%d", &n);
    } while (n < 100 || n > 999);

    inv = n - ((n - n%100)/100 - (n%10)) * 99;

    printf("Resultado: %d\n", inv);

}
