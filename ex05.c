#include <stdio.h>

int main()
{
    int a;
    printf("inserisci la tua età");
    scanf("%d", &a);
    if(a<18)
    {
    printf("sei minorenne");
    }
    else
    {
        printf("sei maggiorenne");
    }
}