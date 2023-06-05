#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6

int main ()
{
    srand (time(NULL));
    int vAposta[N], vMega_sena[N], i = 0, j, existe, acertos = 0;

    do //i = 2
    {
        vMega_sena[i] = ((rand()%60)+1); // 5 4 6

        existe = 0; // n existe
        for (j = 0; j < i; j++) // j = 1
        {
            if (vMega_sena[j] == vMega_sena[i])
            {
                existe++; // 1
                break;
            }
        }

        if (existe == 0)
        {
            i++;
        }
        
    } while (i < N);

    i = 0;
    do
    {
        printf ("Digite um valor da sua aposta: ");
        scanf ("%i", &vAposta[i]);

        if (vAposta[i] < 1 || vAposta[i] > 60)
        {
            printf ("Invalido!\n");
        }else
        {
            i++;
        }
        
    } while (i < N);

     printf ("\n<<MEGA SENA>>\n");

    for (i = 0; i < N; i++) // i = 0
    {
        printf ("%i " , vMega_sena[i]);
    }

    printf ("\n\n<<APOSTAS>>\n");

    for (i = 0; i < N; i++) // i = 0
    {
        printf ("%i " , vAposta[i]);
    }

    printf ("\n\n<<ACERTOS>>");

    for ( i = 0; i < N; i++) // aposta: i = 0
    {
        for ( j = 0; j < N; j++) // Mega Sena: j = 0
        {
            if (vAposta[i] == vMega_sena[j])
            {
                acertos++;
                break;
            }
        }
    }
    
    printf ("\n%i acertos ", acertos);
    

    return 0;
}