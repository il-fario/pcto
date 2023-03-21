#include <stdio.h>

 int main()
{
    int x;
     
    printf("quando sei nato");
    scanf("%d", &x);

    if(x%4 == 0 && x%100 != 0 || x%400 == 0)
     {
        printf("hanno bisestile");
    }
    else
    {
      printf("no bisestile");
}
}