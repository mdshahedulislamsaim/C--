#include <stdio.h>

int main()
{
    double a;
    int m,h,n,n1,n2,ft,tw,te,fv,two,o,coin,tv;
    scanf("%lf", &a);

    n = (int)a;
    n1 = (int)a*100;
    a = a*100;
    n2 = (int)a;
    coin = n2-n1;

    printf("NOTAS:\n");

    h = n / 100;
    m = n % 100;
    printf("%d nota(s) de R$ 100.00\n", h);

    ft = m/50;
    m = m%50;
    printf("%d nota(s) de R$ 50.00\n", ft);

    tw = m/20;
    m = m%20;
    printf("%d nota(s) de R$ 20.00\n", tw);

    te = m/10;
    m = m%10;
    printf("%d nota(s) de R$ 10.00\n", te);

    fv = m/5;
    m = m%5;
    printf("%d nota(s) de R$ 5.00\n", fv);

    two = m/2;
    m = m%2;
    printf("%d nota(s) de R$ 2.00\n", two);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", m);

    ft = coin/50;
    m = coin%50;
    printf("%d moeda(s) de R$ 0.50\n", ft);

    tv = m/25;
    m = m%25;
    printf("%d moeda(s) de R$ 0.25\n", tv);

    te = m/10;
    m = m%10;
    printf("%d moeda(s) de R$ 0.10\n", te);

    fv = m/5;
    m = m%5;
    printf("%d moeda(s) de R$ 0.05\n", fv);


    printf("%d moeda(s) de R$ 0.01\n", m);

}
