#include<stdio.h>
int ISPRIME(int n)
{
    int i,counter=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        counter++;
    }
    if(counter==1)
    return 1;
    else
    return 0;
}
int main()
{
    int num,prime[100],count=0,i;
    printf("Enter the range upto which u want to check prime for:\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
     if(ISPRIME(i)==1)
     {
        prime[count]=i;
        count++;
     }
    }
    printf("The prime numbers upto %d are:\n",num);
    for(i=0;i<count;i++)
    {
        printf("%2d",prime[i]);
    }
    return 0;
}
