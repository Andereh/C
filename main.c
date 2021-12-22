#include <stdio.h>

int len(int n)
{
    return (int)(sizeof(n)/sizeof(n[0]));
}


int main()
{
    int base [] = {5, 20, 15, -20, -20};
    int restos [sizeof(base)/sizeof(base[0]) - 1];

    int results [sizeof(base)/sizeof(base[0])];
    
    results[0] = base[0];

    for(int i = 1; i < len(base); i++)
    {
        restos[i] = results[i-1];
    }
    return 0;
}
