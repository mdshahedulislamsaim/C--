#include <stdio.h>

int main()
{
    int n,p=0,mod,s=0;

    while(scanf("%d",&n)!=EOF)
    {
        if(n > 1)
        {
            p = 0;
            for(int i=2; i<n; i++)
            {
                if(n % i == 0)
                {
                    p = 1;
                    break;
                }
            }

            if(p == 1)
                printf("Nada\n");
            else
            {
                int a = n;
                s = 0;
                while(a > 0)
                {
                    mod = a % 10;
                    a = a / 10;

                    if (mod != 2 && mod != 3 && mod != 5 && mod != 7)
                    {
                        s = 1;
                        break;
                    }
                }
                if(s == 1)
                    printf("Primo\n");
                else
                    printf("Super\n");
            }
            p=0, s=0;
        }
        else
            printf("Nada\n");
    }
}
