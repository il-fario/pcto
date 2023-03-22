#include <stdio.h>

 int main()
{
    int x;
    int z;
    int somma = 0;
printf("utente inserisce un numero");
scanf("%d", &x);
int y = x;
while(y>0 && y<=x)
{
    y--;
printf("utente inserisce un numero");
scanf("%d", &z);
somma = somma + z;
}
printf("la somma di tutti i numeri che ho inserito è %d\n", somma);
}
