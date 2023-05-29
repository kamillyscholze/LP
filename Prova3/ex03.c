#include<stdio.h>
int main()
{

    int N, i, j, div;

    do
    {
        printf("Digite N positivo: ");
        scanf("%d", &N);

        if (N < 1)
        {
            printf ("Invalido!\n");
        }
        
    } while (N < 1);

    // n = 10

    for (i = 2; i <= N; i++) // 4
    {
        div = 0;
        for ( j = 2; j < i; j++) // 2
        {
            if (i % j == 0)
            {
                div++;
                break;
            }
            
        }

        if (div == 0)
        {
            printf("%d", i);  // 2 3 
        }
        
        
    }

    


    
    return 0;
}
// 1. Leia N e K positivos, para K > N, e imprima a tabuada de N para todo i de 1 a K.