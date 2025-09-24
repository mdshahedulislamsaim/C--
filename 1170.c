#include <stdio.h>

int main()
{
    int n,d=0;
    scanf("%d",&n);

    float x;
    for(int i=0; i<n; i++)
    {
        scanf("%f",&x);
        while(x>1)
        {
            x = x/2;
            d++;
        }
        printf("%d dias\n",d);
        d=0;
    }
}
