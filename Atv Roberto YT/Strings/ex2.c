#include <stdio.h>
#define N 50

int main () 
{
    char nome[N];
    int i, tam;

    printf ("Digite um nome: ");
    gets(nome);
    puts(nome);

    tam = 0;

    for (i = 0; nome[i] != '\0'; i++)
    {
        tam++;
    }

    printf ("String invertida: ");

    for ( i = tam-1; i >= 0; i--)
    {
        printf ("%c", nome[i]);
    }
    
    return 0;
}

//EP14
//https://youtu.be/gkDB6BJ_rdI