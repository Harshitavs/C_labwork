#include <stdio.h>
int main () {
char Name[50];
int age ;

printf("Enter your Name :");
scanf("%s" , Name );
printf("Enter your age : ");
scanf("%d" , &age);

printf(" Your Name is %s \n" , Name );
printf("You are %d years old\n" ,age );
 
return 0;
}

