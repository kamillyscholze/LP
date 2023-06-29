#include <stdio.h>

int main () 
{
    int a = 0, n = 0, calc = 1, i;

    while ((a <= 0) || (n <= 0))
    {
        printf ("Digite dois valores inteiros postivos: ");
        scanf("%d%d", &a, &n);
    }

    for (i = 0; i < n ; i++)
    {
        calc = calc * a;
    }
    printf ("O resultado da potenciacao eh %d\n", calc);

    return 0;
}
//EP7
//https://youtu.be/P19UJPbqsiQ