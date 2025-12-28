#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int n,m;
        scanf("%d%d",&n,&m);

        if(n==0 && m==0)
            exit(0);

        int c=m-n;

        int a[]={100,50,20,10,5,2};

        int x,total=0;
        for(int i=0; i<6; i++)
        {
            if(total==3)
                break;

            x = c/a[i];
            c = c % a[i];

            total = total + x;
        }
        if(total==2)
            printf("possible\n");
        else
            printf("impossible\n");



    }
}

