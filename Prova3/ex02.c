#include<stdio.h>
int main()
{

    int N, K, tabuada, mult, result;

    do
    {
        printf("Digite N e K positivos: ");
        scanf("%d %d", &N, &K);

        if ((N < 1) || (K < 1) || (K < N))
        {
            printf ("Invalido!\n");
        }
        
    } while ((N < 1) || (K < 1) || (K < N));

    /* 2 - 3

    1 x 1 = 1
    1 x 2 = 2
    1 x 3 = 3

    2 x 1 = 2
    2 x 2 = 4 
    2 x 3 = 6   
    */

    for ( tabuada = 1; tabuada <= N; tabuada++) // 2
    {
        for (mult = 1; mult <= K; mult++) // 1
        {                           
            result = tabuada * mult;             
            printf("\n%d * %d = %d", tabuada, mult, result);
        }
        printf("\n");
    }
    

    
    
    return 0;
}
