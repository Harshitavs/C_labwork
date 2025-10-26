#include<stdio.h>
float perimeter(float length , float breadth){
return 2*(length + breadth);
}
void greatest( float p1 , float p2 , float p3){
float greatest ;
  greatest = (p1 > p2 && p1 > p3)? p1: (p2>p3?p2:p3);
if (greatest==p1) 
printf("The first rectangle hs the greatest perimeter %.2f\n" ,greatest);
else if (greatest==p2) 
printf("The second rectangle has the greatest perimeter %.2f\n" ,greatest);
else 
printf("The third rectangle has the greatest perimeter %.2F\n" ,greatest);
 }                             
int main (){
float l1,b1,l2,b2,l3,b3;
float P1 ,P2 ,P3, Greatest ;

printf("Enter the length and breadth of rectangle 1 (l1 b1):\n");
scanf("%f%f",&l1 ,&b1 );

printf("Enter the length and breadth of  rectangle 2 (l2 b2):\n");
scanf("%f%f",&l2 ,&b2 );

printf("Enter the length and breadth of  rectangle 3 (l3 b3):\n");
scanf("%f%f",&l3 ,&b3);
 
 if ( l1<=0 || b1<=0 || l2<=0 || b2<=0 || l3<=0 || b3<=0 ){
 printf("length and breadth must be positive values.\n");
 }
P1=perimeter(l1,b1);
P2=perimeter(l2,b2);
P3=perimeter(l3,b3);

 printf("Perimeter of first rectangle= %.2f\n" ,P1);
 
 printf("Perimeter of second rectangle =%.2f\n" ,P2);
 
 printf("Perimeter of third rectangle= %.2f\n" ,P3);
 
 greatest(P1,P2,P3);
return 0; 
}
 
 


