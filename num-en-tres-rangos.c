#include <stdio.h>

int rang1, rang2, rang3, n;

int main() {
	printf("Introduce el rango inferior: ");
	scanf("%d", &rang1);

	printf("Introduce el rango intermedio: ");
	scanf("%d", &rang2);

	while (rang1 >= rang2) {
		printf("El rango intermedio debe ser mayor que el inferior\n");
		printf("Intenta otro: ");
		scanf("%d", &rang2);
	}
	printf("Introduce el rango superior: ");
	scanf("%d", &rang3);
	
	while (rang2 >= rang3) {
		printf("El rango superior debe ser mayor que el intermedio\n");
		printf("Intenta otro: ");
		scanf("%d", &rang2);
	}

	printf("\nIntroduce el numero a evaluar: ");
	scanf("%d", &n);

	printf("\n");

	if (n == rang2) printf("El numero pertence a ambos rangos\n");
	else if (n >= rang1 && n <= rang2) printf("El numero pertece al rango inferior-intermedio\n");
	else if (n >= rang2 && n <= rang3) printf("El numero pertece al rango intermedio-superior\n");
	else printf("El numero no pertece a ningun rango\n");

	return 0;
}
