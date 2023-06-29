#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10

int main () 
{
    float v[N], potencia; 
    int i;
    
    srand((unsigned)time(NULL));

    printf ("Digite a potencia: ");
    scanf("%f", &potencia);

    for (i = 0; i < N; i++)
    {
        v[i] = rand()%101;
    }
    
    for (i = 0; i < N; i++)
    {
        printf ("Valor da posicao (%d) eh: %.2f\n", i, v[i]);
    }

    for (i = 0; i < N; i++)
    {
        v[i] = pow(v[i], potencia);
    }
    printf ("\n\n");
    for (i = 0; i < N; i++)
    {
        printf ("Valor da posicao (%d) eh: %.2f\n", i, v[i]);
    }
    
    return 0;
}
//EP10
//https://youtu.be/d6-Bp07_4RA
