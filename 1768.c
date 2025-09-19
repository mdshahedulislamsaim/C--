#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {


            int k = n/2;
            for(int i=1; i<=n; i+=2)
            {
                for(int j=k; j>0; j--)
                    printf(" ");
                for(int j=1; j<=i; j++)
                    printf("*");
                k--;
                printf("\n");}

            k = n/2;
            for(int i=1; i<=3; i+=2)
            {
                for(int j=k; j>0; j--)
                    printf(" ");
                for(int j=1; j<=i; j++)
                    printf("*");
                k--;
                printf("\n");}
             printf("\n");



    }

}
