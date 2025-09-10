#include <stdio.h>

int main()
{
    int x, z,sum,c;
    scanf("%d", &x);
    while (1)
    {
        scanf("%d", &z);
        if(z > x)
            break;
    }
    sum = x;
    c = 1;
    while(sum<=z)
    {
        sum = sum + ++x;
          c++;
    }
    printf("%d\n",c);

}
