#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    printf("1\n");
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            printf("%d\n",i);
    }
    printf("%d\n",n);
}
