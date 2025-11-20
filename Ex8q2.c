#include <stdio.h>
int main() {
    int intArray[3];
    float floatArray[5];
    char charArray[3];

    int *pInt = intArray;
    float *pFloat = floatArray;
    char *pChar = charArray;

    printf("Original addresses:\n");
    printf("pInt: %p -> *pInt: %d\n", (void*)pInt, *pInt);
    printf("pFloat: %p -> *pFloat: %.1f\n", (void*)pFloat, *pFloat);
    printf("pChar: %p -> *pChar: %c\n\n", (void*)pChar, *pChar);

    // Increment pointers
    pInt++;
    pFloat++;
    pChar++;

    printf("After increment:\n");
    printf("pInt: %p -> *pInt: %d\n", (void*)pInt, *pInt);
    printf("pFloat: %p -> *pFloat: %.1f\n", (void*)pFloat, *pFloat);
    printf("pChar: %p -> *pChar: %c\n\n", (void*)pChar, *pChar);

    // Decrement pointers
    pInt--;
    pFloat--;
    pChar--;

    printf("After decrement (back to original):\n");
    printf("pInt: %p -> *pInt: %d\n", (void*)pInt, *pInt);
    printf("pFloat: %p -> *pFloat: %.1f\n", (void*)pFloat, *pFloat);
    printf("pChar: %p -> *pChar: %c\n", (void*)pChar, *pChar);

    return 0;
}
  
   
