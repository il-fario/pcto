#include <stdio.h>

float riciclo (float a)
{
    float z;
    z=a/3.0;
    return (z); 
}

float protesi (float z)
{
    float x;
    x=z/2.0;
    return (x);
}

int main ()
{
    float l;
    float e;
    float o;
    printf("digitare i chili di plastica raccolta ");
    scanf("%f", &l);
    e = riciclo (l);
    printf("hai contrinbuito alla produzione di %f chili di plastica\n", e);
    o = protesi (e);
    printf("%f chili di plastica riciclata verranno donati per la creazione di protesi\n", o);
}