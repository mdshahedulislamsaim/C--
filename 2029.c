#include <stdio.h>

int main()
{
    double v,d,h;
    while(scanf("%lf%lf", &v,&d)!= EOF)
    {
        h = v/(3.14*(d/2)*(d/2));
        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", v/h);
    }
}

