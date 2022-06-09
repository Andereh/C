#include <stdio.h>

int cash;

int main()
{
    printf("Cuanto dinero tienes: ");
    scanf("%d", &cash);

    if (cash > 0)
    {
        printf("Con ese dinero podras comprar ");

        if (cash <= 10) printf("una tarjeta\n");
        else if (cash <= 100) printf("chocolates\n");
        else if (cash <= 250) printf("flores\n");
        else printf("un costoso anillo\n");

    } else 
    {
        printf("Nono, aqui no acektamos pobres\n");
    }


}
