#include <stdio.h>

 int main()
 {
       int x;
      printf("inserisci numero");
    scanf("%d", &x);
    int y = x;
    int z = 1;
    while(y>1)
    {
    
    z = z*y;
    printf("z: %d\n", z);
    printf("y: %d\n", y);
    y--;
    }
   
        printf("%d\n", z); 
 }