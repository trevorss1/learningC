#include<stdio.h>

int main()
{
    //declare x
    int x;
    
    //input x
    printf("enter the integer: ");
    scanf("%d", &x);

    //calculate and display x
    printf("%d\n", x*(x+1)/2);
    
    return 0;   
}
    
