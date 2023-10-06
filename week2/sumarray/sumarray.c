#include <stdio.h>


int main(void)
{
    int x, i;
    do
    {
        printf("enter the amount of integers: ");
        scanf("%d", &x);
    } while( x < 0);

   int scores [i = 0];
   //for (int y = 0; y < x; y++)
   { 
        printf("enter the integers: ");
        scanf("%d", &scores[0]);
        printf("enter the integers: ");
        scanf("%d", &scores[1]);
        printf("enter the integers: ");
        scanf("%d", &scores[2]);
   }
    printf("Sum: %d\n", scores[0] + scores[1] + scores [2]);
}
