#include <stdio.h>

int main() {
    int a, b;
    double i, j;

    for (a = 0; a <= 20; a += 2) {   // 0, 2, 4, ..., 20 (represents 0.0 → 2.0)
        i = a / 10.0;                // Convert to 0.0, 0.2, 0.4, ...

        for (b = 1; b <= 3; b++) {
            j = b + i;

            if (a % 10 == 0)  // when i = 0.0, 1.0, 2.0
                printf("I=%.0f J=%.0f\n", i, j);
            else
                printf("I=%.1f J=%.1f\n", i, j);
        }
    }

    return 0;
}
