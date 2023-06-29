#include <stdio.h>
int main () 
{
    int l1, l2, l3;

    printf ("Digite os tres lados do triangulo: ");
    scanf("%d%d%d", &l1, &l2, &l3);

    if ((l1 == l2) && (l2 == l3))
    {
        printf ("Equilatero\n");
    }
    else if ((l1 != l2) && (l2 != l3) && (l1 != l3))
    {
        printf ("Escaleno\n");
    }
    else
    {
        printf ("Isosceles\n");
    }
    return 0;
}
//EP3
//https://youtu.be/7w6sWLw5qI0