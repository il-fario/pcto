#include <stdio.h>

 int main()
{
    int x;
   
    printf("quando sei nato");
    scanf("%d", &x);
    int y = x-1969;
    int z = 1969-x;
    if(x==1969)
     {
        printf("sei nato lo stesso hanno dello sbarco sulla luna");
    }
    else if (x<1969)
    {
      printf("sei nato di %d\n anni prima dello sbarco sulla luna",z);
    }
    else
    {
    printf("sei nato di %d\n dopo lo sbarco sulla luna", y);
    }

}