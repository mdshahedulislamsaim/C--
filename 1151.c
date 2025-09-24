#include <stdio.h>

int main()
{
    int n,sum,count;
    scanf("%d",&n);
    int a=0, b=1;

    if(n==1)
        printf("%d", a);
    else
    {
        printf("%d %d", a,b);
        sum = a+b;
        count = 2;
        while(count<n)
        {
            printf(" %d",sum);
            a = b;
            b = sum;
            sum = a+b;
            count++;
        }
    }
    printf("\n");
}
