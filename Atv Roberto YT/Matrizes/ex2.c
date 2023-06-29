#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 5
#define C 5

int main () 
{
    int ma[L][C], mb[L][C], mc[L][C], i, j;
    srand(time(NULL) );

    for (i = 0; i < L; i++)
    {
       for (j = 0; j < C; j++)
       {
            ma[i][j] = rand()%101;
            mb[i][j] = rand()%101;
            mc[i][j] = ma[i][j] + mb[i][j];
       }
    }

    printf ("Matriz A: \n");
    for (i = 0; i < L; i++)
    {
       for (j = 0; j < C; j++)
       {
            printf ("%3d", ma[i][j]);
       }
       printf ("\n");
    }

    printf ("\nMatriz B: \n");
    for (i = 0; i < L; i++)
    {
       for (j = 0; j < C; j++)
       {
            printf ("%3d", mb[i][j]);
       }
       printf ("\n");
    }
    
    printf ("\nMatriz C: \n");
    for (i = 0; i < L; i++)
    {
       for (j = 0; j < C; j++)
       {
            printf ("%3d\t", mc[i][j]);
       }
       printf ("\n");
    }
    return 0;
}
//EP16
//https://youtu.be/6oBSbF-aTFI
