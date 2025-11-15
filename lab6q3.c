#include<stdio.h>
//recurive function to count frequency
void Frequencycount(int *a, int n, int num, int i, int *freq) {
if ( i == n) 
return ;

if (*(a + i) == num) 
 (*freq)++ ; 
Frequencycount(a, n, num,  i + 1, freq);

}
int main() {
int a[70],n,i,num,frequency = 0;
printf("Enter no of elements:");
scanf("%d",&n);

printf("Enter %d elements:\n",n);

for (i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
printf("Enter number to find frequency");
scanf("%d",&num);
//calling function 
Frequencycount(a, n, num, 0, &frequency);

printf("frequency of the %d is: %d\n",num ,frequency);
return 0;
}
