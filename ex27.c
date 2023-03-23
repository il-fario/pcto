#include <stdio.h>

int main()
{
    int n;
    printf("inserisci un numero");
    scanf("%d", &n);
    int e[n];
    int i=0;
    while(i<n)
    {
    scanf("%d", &e[i]);
    i++;
    }
    printf("il numero maggiore è %d\n", e[i]);
}

