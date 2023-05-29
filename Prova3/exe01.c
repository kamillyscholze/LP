// 1. Leia N e K positivos, para K > N, e imprima a tabuada de N para todo i de 1 a K.
#include<stdio.h>
int main()
{

    int N, K, i, mult;

    do
    {
        printf("Digite N e K positivos: ");
        scanf("%d %d", &N, &K);

        if ((N < 1) || (K < 1) || (K < N))
        {
            printf ("Invalido!\n");
        }
        
    } while ((N < 1) || (K < 1) || (K < N));

    for (i = 1; i <= K; i++) 
    {                           
        mult = N * i;
                           
        printf("\n%d * %d = %d", N, i, mult);
    }
    
    return 0;
}
