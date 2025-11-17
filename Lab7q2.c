#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n2==0)
    return n1;
    else
    return gcd(n2,n1%n2);
}
int main()
{
    int num1,num2;
    printf("Enter the numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("The GCD of %d and %d is %d",num1,num2,gcd(num1,num2));
    return 0;
}
