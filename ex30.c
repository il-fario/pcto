#include <stdio.h>

int stringa (char *c)
{
    int a = 0;
   while (c[a] != '\0')
    {
        a++;
    } 
    return (a);
}


int main ()
{
    char c[100];
    int x = 0;
    printf("inserici parola ");
    scanf(" %s", c);
    printf("ls stringa inserita è: %s\n", c);
    
    x = stringa (c);
    printf("la lunghezza della stringa è: %d\n", x);
    char s[100] = "luiss hub";
    x = stringa(s);
    printf("la lunghezza della stringa è: %d\n", x);
}
    