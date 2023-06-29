#include <stdio.h>

int main () 
{
    int n = 0, i;
    float calc = 0;

    while (n <= 0)
    {
        printf ("Digite um valor inteiro postivo: ");
        scanf("%d", &n);
    }

    for ( i = 1; i <= n; i++)
    {
        calc += (1.0 /i);
    }
    printf ("O resultado eh %f\n", calc);

    return 0;
}
//EP8
//https://youtu.be/rs1tsr-BUqA