#include <stdio.h>

int a,b ; //global variable
void add () //space in memory is made but nothing is in it.
{
//sum= a+b;
 printf("The sum of numbers is=%d\n",a+b);
}
int main ()
{
//there is already address for a and b hence no declearation/ initialization needed.
//hence the values of  a and b will be stored in memory then program will execute.
a=5;
b=10;
add();
return 0;
}

