#include<stdio.h>

#define L 3
#define C 50

int main()
{
    char nome[L][C], i, j, tam;
    for (i = 0; i < L; i++)
    {
        printf("Digite um nome: ");
        gets(nome[i]);
    }

    for (i = 0; i < L; i++)
    {
        tam = 0;
        for (j = 0; nome[i][j] != '\0'; j++)
        {
            tam++;
        }
        printf("%s", nome[i]);
        printf(" tem %d caracteres \n", tam);
        
    }
    return 0;
}
//EP17
//https://youtu.be/UnXkSqlPtnw