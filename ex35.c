#include <stdio.h>

int main()
{
int x;
int y;
printf("Scrivi il primo numero: ");
scanf("%d", &x);
printf("Scrivi il secondo numero: ");
scanf("%d", &y);
if(x>0 && y>0)
{
    printf("sei nel primo quadrante");
}
else if(x<0 && y>0)
{
    printf("sei nel secondo quadrante");
}
else if(x<0 && y<0)
{
    printf("sei nel terzo quadrante");
}
else if(x>0 && y<0)
{
    printf("sei nel quarto quadrante");
}
if(x==0 && y!=0)
{
    printf("sei sull'asse delle y");
}
if(x!=0 && y==0)
{
    printf("sei sull'asse delle x");
}
if(x==0 && y==0)
{
    printf("sei nell'origine");
}
}
