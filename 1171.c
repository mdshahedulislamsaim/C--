#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

        int a[n];

        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        for(int i=0; i<n-1; i++)
        {
            int flag = 0;
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                    flag++;
                }
            }
            if(flag==0)
                break;
        }


        int count=1,c=0,in=0;
        for(int i=0; i<n-1; i++)
        {
            count = 1;
            for(int j=i+1; j<n; j++)
            {
                if(a[i]==2001)
                    continue;


                else if(a[i]==a[j])
                {
                    count++;
                    a[j] = 2001;
                    in = i+1;
                }

                c = a[i];
            }
            if(count>1)
                printf("%d aparece %d vez(es)\n", c,count);
            else if(a[in]!=2001)
                printf("%d aparece 1 vez(es)\n", c);

        }
        if(a[n-1]!=2001)
            printf("%d aparece 1 vez(es)\n", a[n-1]);


}


