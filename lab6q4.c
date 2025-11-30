#include<stdio.h>
int main ()
{
int array[100][100],columns,rows,i,j;
printf("Enter the number of rows and columns:\n");
 scanf("%d %d",&rows,&columns);
if (rows<0 || columns<0|| rows>100 || columns>100) {
printf("Error, please enter a valid value");
return 0;
}
printf("Enter elements of each row ");
for(i=0;i<rows;i++)
{   
for (j=0;j<columns;j++)
{
scanf("%d",&array[i][j]);
}
}
 printf("The matrix is:\n");
for (i=0;i<rows;i++) {
for(j=0;j<columns;j++) {
printf("%d",array[i][j]);
}
printf("\n");
}
return 0;
}
