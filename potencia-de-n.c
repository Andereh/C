#include <stdio.h>

int base, expo;
float res;

int abs(int n) {
	if (n < 0) return (-1 * n);
	return n;
}

int main() {
	printf("Programa que dado una base y un exponente te calcula el resultado\n\n");

	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &expo);

	res = 1;

	for (int i = 0; i < abs(expo); i++) {
		res *= base;
	}
	
	if (expo < 1) {
		res = 1 / res;
	}

	printf("El resultado es: %f\n", res);

	return 0;
}
