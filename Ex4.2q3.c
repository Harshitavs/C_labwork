#include <stdio.h>
int x=0;//global 
int main (){
int x=1;//variable for 1st step (code)/ overlaps the global 
printf("%d\n" ,x);
{
int x=3;//variable for 2nd step/overlaps the previous local
printf("%d\n" ,x );
}
printf("%d\n" ,x);
return 0;
}

