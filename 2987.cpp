#include <stdio.h>

int main()
{

    char c;
    int i, j;
    char str[27];

    for (i = 'A', j = 1; i <= 'Z'; ++i, ++j)
        str[i] = j;

    scanf("%c", &c);
    printf("%d\n", str[c]);

    return 0;

}