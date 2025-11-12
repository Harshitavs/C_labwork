#include<stdio.h>

int findsecondlargest(int *arr,int n); //declaring function
int main() {
int n,i;
int arr[100];
printf("Enter the number of elements:");
scanf("%d",&n);

if(n < 2) {
printf("At least 2  elements are needed");
return 0;
}

printf("Enter %d integers:\n",n);
for (i = 0;i < n;i++) {
scanf("%d",(arr + i));
}

int secondL = findsecondlargest(arr , n);
printf("The second largest integer is : %d\n" , secondL);

return 0;
}

//function 
int findsecondlargest(int *arr ,int n ) {
int i;
int largest , secondL;

largest = secondL = *arr;

for  (i = 1; i<n; i++) {
if (*(arr + i) > largest) {
secondL = largest;
largest = *(arr + i);
}
else if (*(arr + i) > secondL && *(arr + i) != largest) {
secondL = *(arr + i); }
}

if (largest == secondL)
printf("all elements are either equal or no distinc second largest");

return secondL ;
}


