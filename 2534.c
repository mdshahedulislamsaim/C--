#include <stdio.h>

int main()
{
    int n,q;
    while(scanf("%d%d",&n,&q)!=EOF)
    {

        int a[n];

        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        for(int i=0; i<n-1; i++)
        {
            int flag = 0;
            for(int j=i+1; j<n; j++)
            {
                if(a[i]<a[j])
                {
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                    flag++;
                }
            }
            if(flag==0)
                break;
        }

        int x;
        for(int i=0; i<q; i++)
        {
            scanf("%d",&x);
            printf("%d\n", a[x-1]);
        }


    }
}


