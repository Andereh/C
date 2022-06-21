#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	float a;
	bool c;

	printf("Digite un numero: ");
	scanf("%f", &a);
	
	c = a == (int)a;

	if (a == (int)a) {
		printf("Es entero\n");
		if (a >= 0) {
			printf("Es natural\n"); 
		}
	} 

	printf("Es racional\n");
	printf("Es real\n");

	return 0;
}
