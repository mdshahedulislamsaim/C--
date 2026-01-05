#include <stdio.h>

int main()
{
    int a[10],x;

    scanf("%d",&x);

    for(int i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i,x);
        x = x*2;
    }
}

