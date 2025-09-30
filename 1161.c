#include <stdio.h>

int main()
{
    long long n,m,x,y;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        x = n;
        y = m;

        if(n==0||n==1)
            x = 1;
        else
        {
           for(int i=n-1; i>1; i--)
            x = x*i;
        }
        if(m==0||m==1)
            y = 1;
        else
        {
            for(int j=m-1; j>1; j--)
            y = y*j;
        }
        printf("%lld\n",x+y);
    }
}
