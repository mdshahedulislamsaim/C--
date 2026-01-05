#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    while(x--)
    {
        int n;
        scanf("%d",&n);

        if(n==1)
            printf("Fib(1) = 1\n");
        else
        {
            long long a=0, b=1, c=0, d=n-1;

            while(d>0)
            {
               c = a+b;
               a = b;
               b = c;
               d--;
            }

            printf("Fib(%d) = %lld\n", n,c);
        }

    }
}

