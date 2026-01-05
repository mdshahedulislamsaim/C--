#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf%lf", &a,&b,&c,&d);

    printf("%.4lf\n", sqrt((c-a)*(c-a) + (d-b)*(d-b)));
}



