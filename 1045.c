#include <stdio.h>

int main()
{
    double A, B, C, temp, a[3];
    int i, j;

    scanf("%lf%lf%lf", &A, &B, &C);

    a[0] = A;
    a[1] = B;
    a[2] = C;

    for(i = 0; i < 3; i++) {
        for(j = i+1; j < 3; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if(a[0] >= a[1] + a[2])
        printf("NAO FORMA TRIANGULO\n");
    else {
        if(a[0]*a[0] == a[1]*a[1] + a[2]*a[2])
            printf("TRIANGULO RETANGULO\n");
        else if(a[0]*a[0] > a[1]*a[1] + a[2]*a[2])
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");

        if(a[0] == a[1] && a[1] == a[2])
            printf("TRIANGULO EQUILATERO\n");
        else if(a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
            printf("TRIANGULO ISOSCELES\n");
    }
}
