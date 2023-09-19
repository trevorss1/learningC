#include<stdio.h>

int twice(int a)
{
    return a*2;
}
int main()
{
    int x = 5;
    int y = twice(x);
    printf("%d\n", y);
    return 0;
}
