#include <stdio.h>

int potenza (int a,int b)
{
    int p = 1;
    while (b>0)
    {
        p= p*a;
        b--;
    }
    return (p);
}

int main ()
{
    int x = 4;
    int y = 12;

    int l = potenza (x,y);
    printf("la potenza è: %d\n", l);
}
