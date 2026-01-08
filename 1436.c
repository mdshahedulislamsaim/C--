#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    int j=1;
    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        printf("Case %d: %d\n", j, a[(n-1)/2]);
        j++;
    }
}

