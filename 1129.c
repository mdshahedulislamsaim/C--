#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            exit(0);
        for(int i=0; i<n; i++)
        {
            int a[5];
            for(int j=0; j<5; j++)
                scanf("%d",&a[j]);

            int flag=-1;
            int index=0;
            for(int j=0; j<5; j++)
            {
                if(a[j]<=127)
                {
                    flag++;
                    index = j;
                }
            }

            if(flag==0)
                printf("%c\n",index+65);
            else
                printf("*\n");
        }
    }
}
