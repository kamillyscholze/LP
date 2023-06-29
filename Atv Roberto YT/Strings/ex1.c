#include <stdio.h>
#define N 50

int main () 
{
    char cid[N];
    int i, cont, cont_esp;

    printf ("Digite o nome da cidade: ");
    gets(cid);
    puts(cid);

    cont = 0;
    cont_esp = 0;
    for (i = 0; cid[i] != '\0'; i++)
    {
        if ((cid[i] == 'a') || (cid[i] == 'A'))
        {
            cont++;
        }
        else if (cid[i] == ' ')
        {
            cont_esp++;
        }
    }
    printf("Total de caracter a eh %d\n", cont);
    printf("Total de espaco eh %d\n", cont_esp);

    return 0;
}

//EP13
//https://youtu.be/WJ_u2YJ1mDY