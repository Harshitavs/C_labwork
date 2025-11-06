#include <stdio.h>
int ans (){
int x,y,z, ans; //local variable
ans = x+y-z;
printf("The answer is=%d\n", x+y-z);
}
int main (){
//since the variable was local it got destoryed after excution of the program.
x=5;
y=3;
z=2;
ans=x+y-z;
return 0;
}


