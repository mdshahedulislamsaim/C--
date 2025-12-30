#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int h,c,l;
        scanf("%d%d%d", &h,&c,&l);

        double x;
        x = (n*l*sqrt(h*h+c*c))/10000.0;

        printf("%.4lf\n", x);
    }
}

