#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        int flag = 0;

        for(int j=2; j<x; j++)
        {
            if(x%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            printf("%d nao eh primo\n", x);
        else
            printf("%d eh primo\n", x);
    }
}

