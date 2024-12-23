#include <stdio.h>
int main() {
    long long int A,B,sum;
    scanf("%lld %lld",&A,&B);
    sum=((B+A)*(B-A+1))/2;
    printf("%lld\n",sum);
    return 0;
}