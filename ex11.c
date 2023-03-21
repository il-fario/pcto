#include <stdio.h>

 int main()
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

    if(x+y>z && y+z>x && x+z>y)
     {
        printf("hai un triangolo");

        if(x == y && z == x && z == y)
        {
             printf("hai un triangolo equilatero");
        }
        else if ((x == y &&  z != y ) || ( x != y &&  z == y) || ( z != x && z == y  ))
       {
             printf("hai un triangolo isoscele");
        }
        else 
         {
             printf("hai un triangolo scaleno");
        }
    }
    else
    {
      printf("non hai un triangolo");
}
}