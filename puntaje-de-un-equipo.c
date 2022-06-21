#include <stdio.h>
#include <string.h>

int ptsxpart, ptsxpartG, ptsxpartP, ptsxpartE, ptsTotal;
int npartG, npartP, npartE;
char nombreEquipo [20];

int main(int argc, char *argv[])
{
	printf("Como se llama el equipo: ");
	fgets(nombreEquipo, 22, stdin);

	while (strlen(nombreEquipo) < 2) {
		printf("En la Fifa no aceptamos equipos fantasma. Introduce un "
			"nombre: ");
		fgets(nombreEquipo, 22, stdin);
	}

	if (nombreEquipo[strlen(nombreEquipo) - 1] == '\n') {
		nombreEquipo[strlen(nombreEquipo) - 1] = '\0';
	}

	printf("\nIngrese los siguientes datos a continuacion\n\n");

	printf("\tPartidos ganados: ");
	scanf("%d", &npartG);
	printf("\tPartidos perdidos: ");
	scanf("%d", &npartP);
	printf("\tPartidos empatados: ");
	scanf("%d", &npartE);

	while (npartG < 0 || npartP < 0 || npartE < 0) {
		printf("\nNono, es imposible que tengas partidos negativos. "
			"Introducelos de nuevo\n\n");

		printf("\tPartidos ganados: ");
		scanf("%d", &npartG);
		printf("\tPartidos perdidos: ");
		scanf("%d", &npartP);
		printf("\tPartidos empatados: ");
		scanf("%d", &npartE);
	}

    ptsxpart = npartG + npartP + npartE;
	ptsxpartG = npartG * 3;
	ptsxpartE = npartE;

	// Para evitar un core dump al dividir 0
	if (npartP == 0 || (ptsxpartG + ptsxpartE) == 0) { 
		ptsxpartP = 0;
	} else {
		ptsxpartP = npartP / ((ptsxpartG + ptsxpartE) / 2);
	}

	ptsTotal = ptsxpartG + ptsxpartP + ptsxpartE + ptsxpart;

	if (ptsTotal < 1) {
		printf("Jamas imagine que el '%s' fuera un equipo tan miserable\n",
			nombreEquipo);
	} else {
		printf("Afortunadamente el '%s' consiguio %dpts en esta temporada\n",
			nombreEquipo, ptsTotal);
	}

    return 0;
}
