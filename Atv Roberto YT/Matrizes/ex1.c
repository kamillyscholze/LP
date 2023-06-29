#include <stdio.h>
#define L 5
#define C 5

int main () 
{
    int m[L][C], i, j;
    srand( (unsigned)time(NULL) );

    for (i = 0; i < L; i++)
    {
       for (j = 0; j < C; j++)
       {
            m[i][j] = rand()%101;
       }
    }

    for (i = 0; i < L; i++)
    {
       for (j = 0; j < C; j++)
       {
            printf ("%3d", m[i][j]);
       }
       printf ("\n");
    }
    
    return 0;
}
//EP15
//https://youtu.be/OO3JIwjPkNI