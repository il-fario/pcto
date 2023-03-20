#include <stdio.h>

float main()
{
    float x;
    float y;
    float z;
   
    printf("inserisci numero");
    scanf("%f", &x);
    printf("inserisci numero");
    scanf("%f", &y);
    printf("inserisci numero");
    scanf("%f", &z);
    
    if(x-y==y-z && z-x == x-y)
    {
        printf("sono in seguenza aritmetica");
    }
    else
    {
      printf("non sono in seguenza");
    }
}