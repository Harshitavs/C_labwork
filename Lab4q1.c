#include <stdio.h>
#include<math.h>
int validity( float a ,float b ,float c ) {
if ((a+b>c && a+c>b && b+c>a))
return 1;
else 
return 0;
}
int equi( float a ,float b  ,float c ) {
if ((a==b && b==c)) 
return 1;
else 
return 0;
}
int isoc( float a ,float b ,float c) {
if (( a==b || b==c || c==a))
return 1;
else
return 0;
}
 
 int rightangled( float a ,float b ,float c) {
 if (( a*a + b*b == c*c) || ( a*a + c*c == b*b ) ||(c*c + b*b == a*a))
return 1 ;
else 
return 0;
}

int main() { 
float a,b,c;
printf("Enter sides (a ,b ,c ):");
scanf("%f %f %f",&a, &b, &c);
if (validity(a ,b , c ) ) {
printf("The triangle is valid \n");

  if  (equi(a , b ,c)) 
  {
  printf("It is an equilateral triangle.\n");
  }
 else if (isoc(a ,b ,c ))
 { 
 printf(" It is an isosceles triangle.\n");
 }
 else if (rightangled(a ,b, c ))
 {
 printf(" It is a right angled triangle .\n");
 }
 else {
 printf("It is a scalene triangle.\n");
 }
}
else
{
printf("the triangle is invalid\n");
}

return 0;
}
