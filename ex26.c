#include <stdio.h>

int fattoriale (int n)
{
  int z = 1;
    while(n>1)
    {
    
    z = z*n;
    n--;
    } 
    return(z);
}

int main()
{
   int w;
    printf("inserisci un numero");
    scanf("%d", &w);
    int a [w];
    int i=0;

    while(i<w)
    {
        a[i]=fattoriale(i);
        printf("%d\n", a[i]);
        i++;
    }
}