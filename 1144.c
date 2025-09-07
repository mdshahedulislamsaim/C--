#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=0;j<2;j++)
            printf("%d %d %d\n", i,i*i+j,i*i*i+j);
    }
}
