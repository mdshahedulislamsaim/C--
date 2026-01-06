#include <stdio.h>

int main()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
            break;

        int a[n];

        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        int r=0,max =a[0];
        for(int i=1; i<n; i++)
        {
            if(max< a[i])
            {
                r = i;
                max = a[i];
            }
        }

        a[r] = 0,
        r = 0;
        max = a[0];


        for(int i=1; i<n; i++)
        {
            if(max< a[i])
            {
                r = i;
                max = a[i];
            }
        }
            printf("%d\n",r+1);
    }

}

