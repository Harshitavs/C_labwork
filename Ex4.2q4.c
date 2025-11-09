#include <stdio.h>
void increasednum() {
static int num = 0;
num++ ;
printf("num value = %d\n" , num);
}

int main ()
{ 
//first increasednum();
 increasednum();
//second increasednum();
increasednum();
//third increasnum ():
 increasednum();
return 0;
}
