#include <stdio.h>

int main()
{
    int n,i;

    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            for(i=1; i<n; i++)
                printf("%d ",i);
            printf("%d\n",i);
        }
    }
}
