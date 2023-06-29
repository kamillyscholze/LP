#include <stdio.h>
int main () 
{
    int ano;

    printf ("Digite o Ano: ");
    scanf("%d", &ano);

    if (ano <= 0)
    {
        printf ("Ano invalido\n");
    }
    else if (ano % 4 == 0)
    {
        printf ("Ano Bissexto\n");
    }
    else
    {
        printf ("Ano nao Bissexto\n");
    }
    return 0;
}
//EP2
//https://youtu.be/UDK4BLUzC_I