#include <stdio.h>

int main(void)

{
    int d, m, y;
    
    d=2;
    m=8;
    y=10;

    while (scanf("%d/%d/%d", &d, &m, &y) != EOF)
    {
        printf("%02d/%02d/%02d\n", m, d, y);
        printf("%02d/%02d/%02d\n", y, m, d);
        printf("%02d-%02d-%02d\n", d, m, y);
    }

    return 0;
}