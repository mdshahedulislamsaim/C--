#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d cm2\n", (x*y)/2);
    }

}

