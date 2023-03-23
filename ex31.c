#include <stdio.h>

int main ()
{
    char c[100];
    int b = 0;

    printf("digita parola");
    scanf("%s", c);
    while (c[b] != '\0')
    {
    printf("%c\n", c[b]);
    b++;
    }
}
    