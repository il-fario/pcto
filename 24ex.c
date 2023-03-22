#include <stdio.h>

char cambio (char a)
{
    char b=-32;
    char d=32;
    char c;
    if(a>64 && a<91)
    {
     c=a+d;
     printf("la minuscola è %c\n", c);
    }
    else if (a>96 && a<123)
    {
      c=a+b;
     printf("la minuscola è %c\n", c);  
    }
    else
    {
        printf("la lettera è %c\n", a);
    }
    return (c);
}
int main ()
{
    char l;
    printf("scrivi una lettera ");
    scanf(" %c", &l);
    char c = cambio(l);
}