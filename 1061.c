
#include <stdio.h>

int main()
{
    long long d1,h1,m1,s1,d2,h2,m2,s2,t1,t2,t,mod,d,h,m,s;
    scanf("Dia %lld",&d1);
    scanf("%lld : %lld : %lld",&h1,&m1,&s1);

    scanf("Dia %lld",&d2);
    scanf("%lld : %lld : %lld",&h2,&m2,&s2);

    t1 = d1*86400+h1*3600+m1*60+s1;
    t2 = d2*86400+h2*3600+m2*60+s2;

    t = t2-t1;

    d = t/86400;
    mod = t%86400;
    printf("%lld dia(s)\n",d);

    h = mod/3600;
    mod = mod%3600;
    printf("%lld hora(s)\n",h);

    m = mod/60;
    mod = mod%60;
    printf("%lld minuto(s)\n",m);

    printf("%lld segundo(s)\n",mod);

}


