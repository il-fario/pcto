#include <stdio.h>

int cambio (int a)
{
    int b=-1;
    int c;
    if(a<0)
    {
     c=a*b;
     printf("il positivo è %d\n", c);
    }
    else
    {
        printf("il positivo è %d\n", a);
    }
    return (c);
}
int main ()
{
    int l;
    printf("scrivi un numero");
    scanf("%d", &l);
    int c = cambio(l);
}