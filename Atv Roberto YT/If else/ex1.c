#include <stdio.h>
int main ()
{
    int a, b, c;

    printf ("Digite os 3 valores: ");
    scanf ("%d%d%d" , &a, &b , &c);

    if ((a <= b) && (b <= c))
    {
        if (b <= c)
        {
            printf ("%d %d %d\n", a, b , c);
        } 
        else
        {
            printf ("%d %d %d\n", a, c, b);
        }
    }
    else if ((b <= a) && (b <= c))
    {
        if (a <= c)
        {
            printf ("%d %d %d\n", b, a, c);    
        } 
        else 
        {
            printf ("%d %d %d\n", b, c, a);  
        }
    } 
    else 
    {
        if (a <= b)
        {
            printf ("%d %d %d\n", c, a, b);  
        } 
        else 
        {
            printf ("%d %d %d\n", c, b, a);  
        }
    }
    return 0;
}
//EP1
//https://youtu.be/rGg5uwI9ROg