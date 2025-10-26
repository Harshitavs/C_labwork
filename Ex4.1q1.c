// Code to count positive,negative and zero numbers
#include<stdio.h>
int main()
{
    int Tnum,num,i=0,Pcount=0,Ncount=0,zero=0;
    printf("Enter the total amount of  number:");
    scanf("%d",&Tnum);
    for(;i<Tnum;i++)
    {
      printf("Enter the numbers");
      scanf("%d",&num);
      if(num>0)
      {
        Pcount++; // counts positive numbers
      }
      else if (num<0)
      {
        Ncount++; // counts negative numbers
      }
      else
      {
        zero++;// counts zeroes
      }
    }
    printf("The total number of\n 1.Positive numbers: %d\n 2.Negative numbers: %d\n 3.Zeroes: %d",Pcount,Ncount,zero);
    return 0;
}
