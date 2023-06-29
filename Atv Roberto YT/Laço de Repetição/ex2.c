#include <stdio.h>
int main () 
{
    int ano = 0;

    while (ano <= 0)
    {
        printf ("Digite o Ano: ");
        scanf("%d", &ano);
    }
    
    if (ano % 4 == 0)
    {
        printf ("Ano Bissexto\n");
    }
    else
    {
        printf ("Ano nao Bissexto\n");
    }
    return 0;
}
//EP5
//https://youtu.be/3Bfx-xMdW28