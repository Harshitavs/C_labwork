// pascal triangle code
#include<stdio.h>
void printspace( int rows ){
int i;
for(i=0;i<rows;i++) // row counter
    {
        printf(" ");
        }
}
void printrow(int rows) {
int num=1;
for (int i=0;i <=rows;i++) {
printf("%2d" , num);
num = num * (rows - i)/(i + 1); 
}
}
void printpascal(int rows) {
int pattern = 1,num,i;
 for(i=0;i<rows;i++) // loop to print the number
        {
           printspace(rows-1);
           printrow(i);
            printf("\n");
            }
            }
            
int main() {
 int rows; //space,i,num,pattern;
  printf("Enter the number of rows:");
  scanf("%d",&rows);
  if(rows<=0)
    {
        printf("Please enter a positive value only.");
        return 0;
    }
    
    printpascal(rows);
    
   /* for(i=0;i<rows;i++) // row counter
    {
        for(space=1;space<=rows-i;space++) // loop to print spaces for the pattern
        {
            printf(" ");
        }
        //pattern=1;
        //for(num=0;num<=i;num++) // loop to print the number
        {
        //   printf("%2d",pattern);
          // pattern=pattern*(i-num)/(num+1);// formula for pascal triangle
        //} 
       // printf("\n");
   // }
*/
    return 0;
}
