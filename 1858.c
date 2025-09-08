#include <stdio.h>

int main()
{
    int n,i,t,min,index;
    scanf("%d",&n);

    scanf("%d",&t);
    min = t;
    index = 1;


    for(i=1; i<n; i++)
    {
        scanf("%d",&t);
        if(min>t)
        {
            min = t;
            index = i+1;
        }
    }
    printf("%d\n",index);
}

