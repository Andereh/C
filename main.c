#include <stdio.h>
// No se puede crear una funcion segura que mida arrays 
int main()
{
    int base [] = {5, 20, 15, -20, -20};
    int restos [sizeof(base)/sizeof(base[0]) - 1];

    int results [sizeof(base)/sizeof(base[0])];
    
    results[0] = base[0];

    return 0;
}
