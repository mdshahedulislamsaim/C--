#include <stdio.h>
#include <math.h>

int main() {
    while (1) {
        int l, c, r1, r2;
        scanf("%d %d %d %d", &l, &c, &r1, &r2);

        if (l==0 && c==0 && r1==0 && r2==0)
            break;

        if (2*r1 > l || 2*r1 > c || 2*r2 > l || 2*r2 > c) {
            printf("N\n");
            continue;
        }

        double dx = l - r1 - r2;
        double dy = c - r1 - r2;
        double dist = sqrt(dx*dx + dy*dy);

        if (dist >= r1 + r2)
            printf("S\n");
        else
            printf("N\n");
    }
}
