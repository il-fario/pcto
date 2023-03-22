#include <stdio.h>
int fattoriale (int n)
{
  int z = 1;
    while(n>1)
    {
    
    z = z*n;
    n--;
    } 
    return(z);
}

 int main()
{
int numero;
printf("utente inserisce un numero");
scanf("%d", &numero);
int f = fattoriale (numero);
printf("il fattoriale di %d è %d\n", numero, f);
}
