#include <stdio.h>  //infunctions
float Area( float l , float b) {
return l*b ;
}
float Perimeter( float l , float b){
return 2*(l+b);
}

int main (){
float l, b , A , P ;
printf("Enter the length of rectangle (l) : ");
scanf("%f", &l );
printf("Enter the breadth of the rectangle (b):");
scanf ("%f" , &b );
 
if (l<=0 || b<=0)
{
printf("The value of length & breadth can't be negative or 0 ");
}

else {
A = Area( l ,  b);
P = Perimeter(  l ,  b);
printf("The area is %0.2f\n", A);
printf("The perimetwer is %0.2f\n ", P);
}
return 0;
}
