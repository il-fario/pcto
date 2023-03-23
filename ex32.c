#include <stdio.h>

void stringa (char *c)
{
    int a = 0;
   while (c[a] != '\0')
    {
        if (c[a]>96 && c[a]<123)
        {
            c[a]=c[a]-32;
            printf("%c",c[a]);
        }
        a++;
    } 
}

int main ()
{
    char l[100];
    printf("digita parola");
    scanf("%s", l);
    stringa(l);
    printf("%s\n", l);
}