#include<stdio.h>
int main()
{
    int j,num,product;
    printf("Enter the number of whose multiplication table you want:");
    scanf("%d",&num);
    for(j=1;j<=10;j++)// loop to print the table of the given number
    {
     product=num*j;
     printf("%d*%d=%d\n",num,j,product);   
    }
    return 0;
}
