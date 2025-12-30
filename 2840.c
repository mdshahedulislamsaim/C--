#include <stdio.h>

int main()
{
    long long r, l;
    scanf("%lld%lld", &r, &l);
    printf("%lld\n", (long long)(l/(double)((4.0*3.1415*r*r*r)/3.0)));
}
