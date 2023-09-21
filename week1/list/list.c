#include<stdio.h>

int main()
{
    int x, z;
    int y = 0;
    do 
    {
        printf("enter the integer: ");
        scanf("%d", &x);
    } while( x < 0);

    
    for (int a = 1; a <= x; a++)
    {
       for (int b = 1; b <= x; b++)
       {
        y = a*b;
        printf("%d * %d = %d\n", a, b, y);
       }
    }
    return 0;
}


