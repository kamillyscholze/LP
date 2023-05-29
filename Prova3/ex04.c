#include <stdio.h>
int main ()
{
    int n, quant = 0, n_maior = 0, n_menor = 0, soma = 0;
    double media ;

    do
    {
        printf ("Digite um valor positivo: "); // soma 5
        scanf ("%i" , &n); // n 5 3 6
       
        if (n > 10)
        {
           printf ("Invalido\n");
           continue;
        }
        quant++;

        if (n_menor == 0 && n_maior == 0 && n > 0)
        {
            n_maior = n;
            n_menor = n;
        }
        else if(n < n_menor && n > 0)
        {
            n_menor = n;
        }
        else if(n > n_maior && n > 0)
        {
            n_maior = n;
        }

        if(n > 0)
        {
            soma = n + soma;
        }

    } while (n > -1);
    
    media = soma / (quant - 1);

    printf ("Quantidade de valores digitados: %i\n" , quant-1);
    printf  ("Menor numero %i, maior numero %i\n" , n_menor, n_maior);
    printf ("Soma: %i\n" , soma);
    printf ("media:%.2lf\n", media);

    return 0;
} 

//Leia uma sequência de notas (entre 0 e 10 ) O programa encerra caso uma nota negativa seja digitada. Ao fim, imprimir: média dos valores digitados; maior e menor digitados; e a quantidade de notas digitadas.
//double %lf
//prova do superior atv 3