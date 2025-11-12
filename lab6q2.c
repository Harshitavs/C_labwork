#include<stdio.h>

void categorize( int *a , int n, int i , int *positive , int *neg, int *even , int *odd) {
if ( i == n)  //recursion
return ;

if (*(a + i) >=0)
(*positive)++;

else   
(*neg)++;

if (*(a + i) % 2 == 0)
(*even)++;
else
(*odd)++;

categorize( a, n ,i + 1, positive , neg , even ,odd);  //recursive function,, i+1 for next element 
}

int main(){
int a[50],n,i;
int positive=0, neg=0,odd=0,even=0;
printf("Enter no of elements:");
scanf("%d",&n);
printf("Enter %d elements:\n",n);

for (i=0;i<n;i++) {
scanf("%d",&a[i]);
}

categorize(a, n, 0, &positive, &neg, &even, &odd);
/*if (a[i]>=0)
positive++;
else if (a[i]<0) 
neg++;
if (a[i]%2 == 0)
even++;
else
odd++;
}*/
printf("Positive numbers:%d\n" ,positive);
printf("Negative numbers:%d\n",neg);
printf("Odd numbers:%d\n",odd);
printf("even number:%d\n",even);
return 0;
}
