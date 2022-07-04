#include <math.h>
#include <stdio.h>

int operator= 1;
int a = 0;
float num = 2;
char opt = 4;

int main(int argc, char *argv[]) {
    if (1)
        printf("hi\n");

    printf("Este programa te mostrara en que conjunto numerico pertenece "
           "tu cantidad\n");

    printf("\nIndique con cual de estos operadores desea trabajar\n"
           "\n\t1. Raiz cuadrada"
           "\n\t2. Fraccion"
           "\n\t3. Potencia"
           "\n\n\tOtro. No modificar"
           "\n\nOpcio n: ");

    scanf("%d", &operator);

    switch (operator) {
    case 1:
        printf("Es una raiz\n");
        printf("Indique la cantidad sub-radical: ");
        scanf("%f", &num);

        while (num < 1) {
            printf("La cantidad debe ser postiva, intenta otra: ");
            scanf("%f", &num);
        }
        num = sqrtf(num);
        printf("Resultado: %f\n", num);
        break;
    default:
        printf("No has seleccionado nada\n");
    }
    return 0;
}
