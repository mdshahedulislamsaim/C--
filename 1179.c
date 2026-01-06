#include <stdio.h>

int main()
{
    int a[15];

    for (int i = 0; i < 15; i++)
        scanf("%d", &a[i]);

    int par[5], impar[5];
    int p = 0, im = 0;

    for (int i = 0; i < 15; i++)
    {
        if (a[i] % 2 == 0)
        {
            par[p++] = a[i];
            if (p == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("par[%d] = %d\n", j, par[j]);
                p = 0;
            }
        }
        else
        {
            impar[im++] = a[i];
            if (im == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("impar[%d] = %d\n", j, impar[j]);
                im = 0;
            }
        }
    }

    for (int j = 0; j < im; j++)
        printf("impar[%d] = %d\n", j, impar[j]);

    for (int j = 0; j < p; j++)
        printf("par[%d] = %d\n", j, par[j]);

}
