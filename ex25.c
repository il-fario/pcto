#include <stdio.h>

int main()
{
    int a [6];
    int i=0;
    int l=0;
    while(i<6)
    {
        a[i]=l;
        printf("%d\n", a[i]);
        i++;
        l+=2;
    }
        
}


