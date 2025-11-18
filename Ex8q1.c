#include<stdio.h>
int main() {
int a = 22;
float b = 2.56;
char c = 'H';

int *ptrInt = &a;
float *ptrFloat = &b;
 char *ptrChar = &c;


printf("Integer Value: %d\n", a);
printf("Pointer Address: %p\n", (void*)ptrInt);
printf("Value through pointer: %d\n\n", *ptrInt);


 printf("Float Value: %.2f\n", b);
 printf("Pointer Address: %p\n", (void*)ptrFloat);
printf("Value through pointer: %.2f\n\n", *ptrFloat);


printf("Char Value: %c\n", c);
 printf("Pointer Address: %p\n", (void*)ptrChar);
printf("Value through pointer: %c\n", *ptrChar);

    return 0;
}



