#include <stdio.h>
#include <conio.h>

int main()
{
    int i,r=0,j=0,s=1;

    for(i=1; i<=100; i++)
    {   s=s+j;
        j=j+2;
        r=r+s;
        printf("%d+",s);
    }
    printf("\nSum = %d",r);
    return 0;
}
