#include <stdio.h>

int main()
{
    int v,i=0,max,index;
    scanf("%d",&v);

    max = v;
    index = 1;

    for(i=1; i<100; i++)
    {
        scanf("%d",&v);
        if(v>max)
        {
            max = v;
            index = i+1;
        }
    }
    printf("%d\n%d\n",max,index);
}

