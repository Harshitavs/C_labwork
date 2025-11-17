#include<stdio.h>
int FIBO(int n)
{
    if(n>=2)
    return (FIBO(n-1)+FIBO(n-2));
    else if(n==1)
    return 1;
    else
    return 0;
}
int main()
{
    int i,number;
    printf("Enter the number upto which Fibonacci series you want:\n");
    scanf("%d",&number);
    printf("The Fibonacci series upto %d is:",number);
    for(i=0;i<number;i++)
    {
        printf("%2d",FIBO(i));
    }

    return 0;
}
