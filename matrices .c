#include<stdio.h>
int main()
{
int array[100][100],column,row,i,k;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d",&row,&column);
    if(column<0||column>100||row<=0||row>100)
    {
        printf("Please enter a valid value.");
        return 0;
    }
    printf("Enter the elements in rach row\n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            scanf("%d",&array[i][k]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            printf("%d ",array[i][k]);
        }
        printf("\n");
    }

    return 0;
}
