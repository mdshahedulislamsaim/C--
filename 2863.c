#include <stdio.h>

int main()
{
    int n, i;
    float t, min;

    while (scanf("%d", &n) != EOF)  // ctrl+z to stop input
    {
        scanf("%f", &t);
        min = t;

        for (i = 1; i < n; i++)
        {
            scanf("%f", &t);
            if (t < min)
                min = t;
        }

        printf("%.2f\n", min);
    }

    return 0;
}
