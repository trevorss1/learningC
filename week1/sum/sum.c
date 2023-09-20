#include<stdio.h>

// int main()
//{
    //declare x
  //  int x, s, y, a;
    //calculate 
  //  do 
  //  {
  //      printf("enter the integer: ");
  //      scanf("%d", &x);
   // }
  //  while (x < 0);
    
    
 //   for (s = 0; s <= x; s++)
  //  {
  //      y = y + s; 
  //  } 
  //    printf("%d\n", y);
      
  //  return 0;
//}


int sum_to(int a)
{
    int x;
    do 
        {
            printf("enter the integer: ");
            scanf("%d", &x);
        }
    while ( x < 0);

    for (int s = 0; s <=  x; s++)
    {
        a = a + s;
    }
    return a;
}
int main()
{
    int x;
    do 
        {
            printf("enter the integer: ");
            scanf("%d", &x);
        }
    while ( x < 0);
    
    {
        int y = sum_to(x);
        printf("%d\n", y);
        return 0;
    }
}