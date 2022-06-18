#include <stdio.h>

/*
 * Realizar un algoritmo para promediar n cantidades
 */

float aux, result, sum = 0;
int n;

int main() {
  printf("Programa para promediar n cantidades.\n\n");

  do {
    printf("Ingrese cuantos numeros quiere promediar: ");
    scanf("%d", &n);
  } while (n < 1);

  for (int i = 1; i <= n; i++) {
    printf("Valor %d/%d: ", i, n);
    scanf("%f", &aux);
    sum += aux;
  }

  sum /= n;

  printf("\nPromedio final: %f\n", sum);
  return 0;
}
