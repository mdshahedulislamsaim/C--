#include <stdio.h>

int main()
{
    int i=1;
    while(1)
    {

        int r,w,l;
        scanf("%d",&r);

        if(r==0)
            break;

        scanf("%d%d",&w,&l);

        if((r*r)>= ((w*w + l*l)/4.0))
            printf("Pizza %d fits on the table.\n",i);
        else
            printf("Pizza %d does not fit on the table.\n",i);

        i++;
    }

}

