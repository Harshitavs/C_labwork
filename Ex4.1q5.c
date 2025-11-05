#include <stdio.h>

int main() {
    int w, x, y, z;
    int sumwx, sumyz;
    int limit = 10000;

    printf("Ramanujan numbers within the defined limit are:\n");

    for (w = 1; w * w * w <= limit; w++) {
        for (x = w + 1; x * x * x <= limit; x++) {
            sumwx = (w * w * w) + (x * x * x);

            for (y = w; y * y * y <= limit; y++) {
                for (z = y + 1; z * z * z <= limit; z++) {
                    sumyz = (y * y * y) + (z * z * z);

                    if (sumwx == sumyz) {
                        // Check if all numbers are distinct or the pairs are different
                        if ((w != y || x != z) && (w != z || x != y)) {
                            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sumwx, w, x, y, z);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
