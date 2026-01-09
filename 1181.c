#include <stdio.h>

int main()
{
    int l;
    scanf("%d",&l);

    char t;
    scanf(" %c",&t);


        float a[12][12],sum=0;
        for(int i=0; i<12; i++)
        {
            for(int j=0; j<12; j++)
            {
                scanf("%f",&a[i][j]);
                if(i==l)
                    sum = sum + a[i][j];
            }
        }

    if(t=='M')
        printf("%.1f\n", sum/12.0);
    else if(t=='S')
        printf("%.1f\n", sum);

}

