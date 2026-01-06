#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    int r=0,flag =0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            r = i;
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d\n",r+2);

    else
        printf("%d\n",r);

}

