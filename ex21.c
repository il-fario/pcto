#include <stdio.h>

int main()
{
    int x;
    int y=0;
    int z=0;
    int k;

    while(y==0)
    {
      
    printf("inserisci un numero di pezzi da aggiungere");
    scanf("%d", &x);

    if(x>0)
    {
      z= z + x;
      if(z>50)
      {
        k = z*5*85/100;
        printf("il prezzo totale annonta a %d\n", k);
      }
      else
      {
        if(z>30)
        {
            k=z*5*90/100;
            printf("il prezzo totale ammonta a %d\n", k);
        }
        else
        {
            k=z*5;
            printf("il prezzo totale ammonta a %d\n", k);
        }
      }
    }
    
    else
    {
        y=y-1;
        printf("hai inserito l'n negativo %d\n", x);
    }
    }
}

