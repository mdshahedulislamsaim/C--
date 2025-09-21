#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long ha, oa;
    while (scanf("%lld %lld", &ha, &oa) != EOF)
        printf("%lld\n", llabs(ha - oa));
}
