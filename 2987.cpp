#include <stdio.h>

int main()
{
    char n;
    scanf("%c",&n);

    if(n >= 'A' && n <= 'Z')
        printf("%d\n", n - 'A' + 1);
    else if(n >= 'a' && n <= 'z')
        printf("%d\n", n - 'a' + 1);

}


