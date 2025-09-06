#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    long long x;

    for(int i=0;i<N;i++)
    {
        scanf("%lld",&x);

        if(x == 0)
            printf("NULL\n");
        else
        {
            if(x%2==0)
                printf("EVEN");
            else
                printf("ODD");
            if(x>0)
                printf(" POSITIVE\n");
            else
                printf(" NEGATIVE\n");
        }
    }

}

