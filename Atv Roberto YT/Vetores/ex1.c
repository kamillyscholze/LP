#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main () 
{
    int vet[N], i;
    
    srand((unsigned)time(NULL));

    for (i = 0; i < N; i++)
    {
        vet[i] = rand()%1000;
    }
    
    for (i = 0; i < N; i++)
    {
        printf ("Valor da posicao (%d) eh: %d\n", i, vet[i]);
    }
    
    return 0;
}
//EP9
//https://youtu.be/0C5Ko6hR3pA