#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);
    long long c[n];

    long long a=3, b=5, d= a+1,i=0,f=n-1;


    while(n!=0)
    {
        if(d>a&&d<b)
        {
            c[i] = d;
            i++;
            d++;
            n--;
        }
        else
        {
            long long e = a+b;
            a = b;
            b = e;
            d = a+1;
        }
    }

    printf("%lld\n",c[f]);


}

