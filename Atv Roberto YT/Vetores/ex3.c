#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 5

int main () 
{
    int v[N], i, soma, soma_geral, divisor;
    
    srand((unsigned)time(NULL));

    for (i = 0; i < N; i++)
    {
        v[i] = rand()%11;
    }

    printf ("\n\n");

    for (i = 0; i < N; i++)
    {
        printf ("Valor da posicao (%d) eh: %d\n", i, v[i]);
    }

    soma_geral = 0;

    for (i = 0; i < N; i++)
    {
        soma = 0;

        if (v[i]==1)
        {
            soma = 1;
        }
        
        for (divisor = 1; divisor < v[i]; divisor++)
        {
            if ((v[i]%divisor) == 0)
            {
               soma += divisor;
            }            
        } 
        soma_geral += soma;

        printf ("Somatoria de divisores da posicao (%d) eh: %d\n", i, soma);
    }
    printf ("Somatoria Geral dos divisores eh: %d\n", soma_geral);

    return 0;
}
//EP11
//https://youtu.be/g2_eAONebb8
