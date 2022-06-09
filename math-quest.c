#include <stdio.h>
#include <stdbool.h>
#include <stdio_ext.h>// si estas en windows y te ocaciona problemas elimina esta linea

float total_hits = 0, total_errs = 0, percentaje;
bool  is_finished;
char  option;
int   tabla_selecc, hit_count, err_count, ans;


int main()
{

    do 
    {
        hit_count = 0;
        err_count = 0;

        printf("\nTabla a estudiar: ");
        scanf("%d", &tabla_selecc);
        
        while (tabla_selecc < 1 || tabla_selecc > 20)
        {
            //fflush(stdio); // para windows
            __fpurge(stdin); 

            printf("\nSolo numeros entre 1 y 20\nPrueba con otro: ");
            scanf("\n%d", &tabla_selecc);
        }
        
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = ", tabla_selecc ,i);
            scanf("%d", &ans);

            if (ans == tabla_selecc * i) hit_count++;
            else err_count++;
        }

        printf("Acertadas: %d\n"
               "Erradas: %d\n", hit_count, err_count);

        printf("\nSeguir practicando(s): ");
        scanf("%s", &option);

        total_hits += hit_count;
        total_errs += err_count;

    } while (option == 's' || option == 'S');

    percentaje = total_hits / (total_hits+total_errs) * 100;

    printf("\nEl juego ha terminado\n");
    printf("Acertaste el %.2f%c de las veces\n", percentaje, '%');
    return 0;
}
