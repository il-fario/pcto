#include <stdio.h>

 int main()
{
    int somma=0;
    int media;
    int y;
    int z=1;

while(y>=0)
{
    printf("utente inserisce un numero");
    scanf("%d", &y);
    somma = somma + y;
    media = somma/z;
    printf("la media è %d\n", media);
       z++;
}
}