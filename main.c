#include <stdio.h>

void main(void) {
	int a, b, c;
	int *punt1, *punt2, *punt;





	punt2 = &b;                                               //1  punt2 = b
	*punt2 = 10;                                              //2  b = 10
	punt = &a;                                                //3  punt = a
	*punt = 12;                                               //4  a = 12
	punt2 = punt1;                                            //5  punt2 = punt1(a) 
	*punt = 0;                                                //6  a = 0
	punt1 = &c;                                               //7  punt1 = c
	*punt1 = 20 + 2;                                          //8  c = 22
	punt = 0;                                                 //9  ¿Qué se imprime?
	punt = &punt1;                                            //10 punt = punt1
	*punt2 = punt;                                            //11 punt2 = punt;
	*punt = 15;                                               //12 a = 15
	printf("%d %d %d\n", a, b, c);                            //13 ¿Qué se imprime? 
	punt = &c;                                                //14 Punt apunta a c ;
//	*punt1 = punt2 + 4;                                       //15 Punt1 le asigno el contenido de punt2 + 4;
//	printf("La dirección de memoria de *punt es: %p", *punt); //16 ¿Qué se imprime?
//	c = *punt1 + *punt2;                                      //17 El contenido de punt1+punt2 se almacena en c ;
//	punt =&a;                                                 //18 Punt apunta a a ;
//	b= a+b;                                                   //19 Se le asigna a c el valor de a + el valor de b ;
//	printf("El valor de b es: %d. \nEl valor de *punt es: %d. \n",b,*punt); //20 ¿Qué se imprime?
}
