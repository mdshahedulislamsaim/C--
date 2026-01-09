#include <stdio.h>

int main()
{
    char t;
    scanf(" %c",&t);


        double a[12][12],sum=0,k=0,l=11;
        for(int i=0; i<12; i++)
        {
            for(int j=0; j<12; j++)
            {
                scanf("%lf",&a[i][j]);
                if(j<(l-i) && j>i)
                    {
                        sum = sum + a[i][j];
                        k++;
                    }
            }
        }

    if(t=='M')
        printf("%.1lf\n", sum/k);
    else if(t=='S')
        printf("%.1lf\n", sum);

}





