#include <stdio.h>

int main()
{
    int a[20];

    for(int i=0; i<20; i++)
        scanf("%d",&a[i]);

    for(int i=19,k=0; i>=0; i--,k++)

        printf("N[%d] = %d\n",k,a[i]);
}


