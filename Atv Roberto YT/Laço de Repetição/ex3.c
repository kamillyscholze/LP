#include<math.h>
#include <stdio.h>

int main () 
{
    int l1, l2, l3, exist = 0;

    while (exist == 0)
    {
        printf ("Digite os tres lados do triangulo: ");
        scanf("%d%d%d", &l1, &l2, &l3);

        if ((l1 <= 0) || (l2 <= 0) || (l3 <= 0))
        {
            printf ("Os lados devem ser positivos!!!\n\n");
        }
        else if ((l1 <= abs(l2-l3)) || (l1 >= l2+l3))
        {
            printf ("Nao satisfaz a condicao de existencia!!!\n\n");
        }
        else if ((l2 <= abs(l1-l3)) || (l2 >= l1+l3))
        {
            printf ("Nao satisfaz a condicao de existencia!!!\n\n");
        }
        else if ((l3 <= abs(l2-l1)) || (l3 >= l2+l1))
        {
            printf ("Nao satisfaz a condicao de existencia!!!\n\n");
        }
        else
        {
            exist = 1;
        }
    }

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
//EP6
//https://youtu.be/NrXi4kbJKpw