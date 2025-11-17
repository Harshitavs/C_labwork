#include<stdio.h>
int rfact(int n)// recursive factorial fxn
{
    if(n==0)
    {
        return 1;
    }
    else
    {
     return (n*rfact(n-1));
    }
}
int fact(int n)// non recursive factorial fxn
{
    int i,product=1;
    if(n==0)
    {
        return 1;
    }
    else{
    for(i=1;i<=n;i++)
    {
        product=product*i;
    }
    return product;
    }
}
int binomial(int n,int r)
{
if(r>n)
return 0;
else{
    return (rfact(n)/(rfact(r)*rfact(n-r)));
}
}
int main()
{
    int maxn,n,r,nCr;
    printf("Enter the value upto which u want table to be printed.\n");
    scanf("%d",&maxn);
    printf("Binomial Coefficient Table\n");
    printf("  n   r  nCr\n");
    for(n=0;n<=maxn;n++)
    {
        for(r=0;r<=n;r++)
        {
            nCr=binomial(n,r);
            printf(" %2d  %2d  %d\n", n, r, nCr);

        }
    }


    return 0;
}
