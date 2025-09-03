#include <stdio.h>

int main()
{
    long long a,b,sum=0,i;
    scanf("%lld %lld",&a,&b);
    if(a>0&&b>0)
    {
        a = a-1;
        b = (b*(b+1))/2;
        a = ((a*(a+1))/2);
        sum = b-a;
        printf("%lld\n",sum);
    }

}
