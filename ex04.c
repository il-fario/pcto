#include<stdio.h>

int main()
{
    int a;
    printf("inserisci un numero");
    scanf("%d", &a);

    a+=7;
    printf("l'aggiunta è %d\n", a);

    a-=7;
    printf("il mio valore è a %d\n", a);
    

    a*=7;
    printf("il mio valore è a %d\n", a);


    a/=7;
    printf("il mio valore è a %d\n", a);

}