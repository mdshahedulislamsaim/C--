#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,qt,s,x,min,pos;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&qt,&s);
        scanf("%d",&x);
        min = abs(s-x);
        pos = 0;

        for(int j=1; j<qt; j++)
        {
            scanf("%d",&x);
            if(abs(s-x)<min)
            {
                min = abs(s-x);
                pos = j;
            }
        }
        printf("%d\n",pos+1);
    }
}
