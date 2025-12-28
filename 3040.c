#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int h, d, g;
        scanf("%d %d %d", &h, &d, &g);

        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }

    return 0;
}
