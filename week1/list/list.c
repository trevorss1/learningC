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

    
    for (int a = 0; a <= x; a++)
    {
       for (int b = 0; b <= x; b++)
       {
        y = a*b;
        {
            printf("%d\n", y);
        }
       }
    }

}

