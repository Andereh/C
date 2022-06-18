#include <stdio.h>
#include <math.h>

int base, expo;
float res;

int main() {
	printf("Programa que dado una base y un exponente te calcula el resultado\n\n");

	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &expo);

	
	if (expo < 1) {
		expo *= -1;
		res = 1 / pow(base, expo);
	} else res = pow(base, expo);

	printf("El resultado es: %f\n", res);

	return 0;
}
