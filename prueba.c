#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void potencia(void);
void descomponer(void);
void triangulo(void);


int main(){
	int opcion, continuar = 1;

	while (1) {
		system("clear");
		printf("\nSeleccione una de las siguientes opciones\n");
		printf("\n\t1. Calcular una potencia");
		printf("\n\t2. Descomponer numero");
		printf("\n\t3. Determinar tipo de triangulo");
		printf("\n\n\tOtro. Salir");
	
		printf("\n\nOpcion: ");
		scanf("%i",&opcion);
			
		if (opcion >= 1 && opcion <= 3){
			switch(opcion){
				case 1:
					potencia();
					break;
				case 2:
					descomponer();
					break;
				case 3:
					triangulo();
			}

		} else {
			printf("\n\t1. Seguro que quieres salir?");
			printf("\n\tOtro. Regresar al menu");
			printf("\n\nOpcion: ");
			scanf("%d", &opcion);

			if (opcion == 1) break;
		}
	}

	printf("\nHas finalizado el programa. Muchas Gracias :3");
	return 0;
}

void potencia (void) {
	int expo, temp_expo, opcion, i;
	float base, resultado;
	
	
	do {
		system("clear");
		resultado = 1;
		printf("\nHas seleccionado calcular la potencia de un numero");
		printf("\n\nIngrese la base: "); 
		scanf("%f",&base);
		printf("Ingrese el exponente: "); 
		scanf("%d",&expo);
		
		temp_expo = expo < 0 ?
					expo * -1: expo;
	
		for (i = 0; i < temp_expo ;i++) {
			resultado *= base;
		}
	
		if (expo < 0) resultado = 1 / resultado;

	
		printf("\n  Resultado: %f", resultado);
		
		printf("\n\n\t1. Desea calcular otra potencia?");
		printf("\n\tOtro. Volver al menu");

		printf("\n\nOpcion: ");
		scanf("%d", &opcion);
		system("clear");
		
	} while(opcion == 1);
	
}

void descomponer (void){
	int num, opcion, k, i;
	
	do {
		k = 1;

		system("clear");
		printf("\nHas seleccionado descomponer un numero");
		printf("\n\nIngrese el numero: ");scanf("%i",&num);
	
		for (i = 1; num > 0; i++) {
			printf("%d\n", num%10 * k);	
			num /= 10;
			k *= 10;
		}

		printf("\n\n\t1. Descomponer otro numero");
		printf("\n\tOtro. Volver al menu");
		printf("\n\nOpcion: ");
		scanf("%d", &opcion);
	} while (opcion == 1);
}

void triangulo (void){
	
	float lado1,lado2,lado3,mayor = 0,C = 0;
	int opcion;
	
	do {
		system("clear");
		printf("Has seleccionado determinar el tipo de triangulo\n\n");
		printf("\tValor del 1er lado: "); scanf("%f",&lado1);		
		printf("\tValor del 2do lado: "); scanf("%f",&lado2);
		printf("\tValor del 3er lado: "); scanf("%f",&lado3);
	
		mayor = lado1;
	
		if (lado2 > mayor) mayor = lado2;
		else mayor = lado3;
	
		C = lado1 + lado2 + lado3 - mayor;
	
		if (mayor <= C) {
		
			if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
				printf("\nEs un triangulo Escaleneo");
			} else if (lado1 == lado2 && lado1 == lado3) {
				printf("\nEs un triangulo equilatero");
			} else {
				printf("\nEs un triangulo isoceles");
			}
	
		} else printf("\nDatos ingresados no pertenecen a un Triangulo");

		printf("\n\n\t1. Desea seguir evaluando triangulos?");
		printf("\n\tOtro. Volver al menu");
		printf("\n\nOpcion: ");
		scanf("%d", &opcion);
	} while (opcion == 1);
}
