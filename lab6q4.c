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
for (i=0;i<rows;i++) {
for(j=0;j<columns;j++) {
printf("%d",array[i][j]);
}
printf("\n");
}
int M[100][50],N[100][50],Sum[100][50]
int rows,columns,i,j
printf("Enter number of rows and columns

return 0;
}
