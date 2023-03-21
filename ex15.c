#include <stdio.h>

 int main()
 {
       int x;
      printf("inserisci numero");
    scanf("%d", &x);
    int y = x-1;
    while(y>1)
    {
    if(x%y==0)
    {
      printf("non è un numero primo perchè lo divide %d\n", y);  
    break;
    }
    y--;
    }
    if(y==1)
    {
        printf("è un numero primo\n"); 
    }
       
 }