#include <stdio.h>

int main()
{
    int a[1000],x;
    scanf("%d",&x);

    for(int i=0,y=x; i<1000; i++,y++)
        printf("N[%d] = %d\n",i,y%x);

}



