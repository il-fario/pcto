#include <stdio.h>

int primo (int x)
{
    int y = x-1;
    while(y>1)
    {
    if(x%y==0)
    {
      return (0);
    }
    y--;
    }
    if(y==1)
    {
        return (1);
    }
 }

 int main()
 {
  int w;
    printf("inserisci un numero");
    scanf("%d", &w);
    int a [w];
    int i=0;
    int p = 2;
    while(i<w)
    {
        if(primo(p))
        {
            a[i]=p;
            printf("array %d\n", a[i]);
            i++;
        }
        p++;
    }
 }