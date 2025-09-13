#include <stdio.h>

int main()
{
    int n,x,all =0,c=0,r=0,s=0;
    char a;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %c",&x,&a);
        all = all + x;

        if(a=='C')
            c = c + x;
        else if(a=='R')
            r = r + x;
        else
            s = s + x;
    }
    printf("Total: %d cobaias\n",all);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);

    printf("Percentual de coelhos: %.2f %%\n", (c * 100.0) / all);
    printf("Percentual de ratos: %.2f %%\n", (r * 100.0) / all);
    printf("Percentual de sapos: %.2f %%\n", (s * 100.0) / all);


}
