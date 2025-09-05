#include <stdio.h>

int main()
{
    int L,C,add;
    scanf("%d%d",&L,&C);

    add = L+C;
    if(add%2==0)
        printf("1\n");
    else
        printf("0\n");

}
