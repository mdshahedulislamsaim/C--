#include <stdio.h>

int main()
{
    int i,j,n,a,b,p1,p2;

    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;

        p1=0,p2=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d%d",&a,&b);
            if(a>b)
               p1++;
            else if(a<b)
                p2++;
        }
        printf("%d %d\n", p1,p2);
    }

}

