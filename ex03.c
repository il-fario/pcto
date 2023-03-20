#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci un numero");
    scanf("%d", &x);
    printf("x: %d\n", x);

    printf("inserisci un numero");
    scanf("%d", &y);
    printf("y: %d\n", y);

    int c = x+y;
    int d = x-y;
    int e = x*y;
    int f = x/y;
    int g = x%y;

    printf("somma: %d\n differenza: %d\n moltiplicazione:%d\n divisione: %d\n resto: %d\n", c, d, e, f, g);
}


