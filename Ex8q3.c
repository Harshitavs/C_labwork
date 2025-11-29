#include <stdio.h>
// Function that modifies two variables using pointers
void updateValues(int *a, float *b, char *c) {
    *a += 10;      // Increase int value by 10
    *b *= 2.0;     // Double the float value
    *c = 'Z';      // Change the char
}
int main() {
    int x = 5;
    float y = 3.5;
    char z = 'A';

    printf("Before:\n");
    printf("x = %d, y = %.1f, z = %c\n", x, y, z);

    // Call function with addresses (pointers)
    updateValues(&x, &y, &z);

    printf("After:\n");
    printf("x = %d, y = %.1f, z = %c\n", x, y, z);

    return 0;
}

