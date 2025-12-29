#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {

        double x,y;
        first:
        scanf("%lf%lf",&x,&y);

        while(x < 0 || x > 10)
        {
            printf("nota invalida\n");
            scanf("%lf",&x);
        }

        while(y < 0 || y > 10)
        {
            printf("nota invalida\n");
            scanf("%lf",&y);
        }

        printf("media = %.2lf\n",(x+y)/2.0);

        second:
        printf("novo calculo (1-sim 2-nao)\n");

        int c;
        scanf("%d",&c);

        if(c==1)
            goto first;
        else if(c==2)
            exit(0);
        else
            goto second;
        }

}

