#include <stdio.h>

int main()
{
    int n,m;

    while(1)
    {
        scanf("%d%d", &n,&m);
        if(n==0 && m==0)
            break;

        int a[m];

        for(int i=0; i<m; i++)
            scanf("%d",&a[i]);

        int count=0,c=0;
        for(int i=0; i<m-1; i++)
        {
            for(int j=i+1; j<m; j++)
            {
                if(a[i]==0)
                    continue;


                else if(a[i]==a[j])
                {
                    count++;
                    a[j] = 0;
                }
            }
            if(count>0)
                c++;
            count = 0;
        }

        printf("%d\n",c);
    }
}

