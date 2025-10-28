#include<stdio.h>

void pattern(int rows) {
int num=1 , space,i,k;
 for(i=1;i<=rows;i++)// rows counter
    {
        for(space=1;space<=rows-i;space++)// loop to provide spaces for the pattern
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)// loop to enter the number for the pattern
        {
            printf("%d", num);
            num++;// makes it consecutive numbers
        }
        printf("\n");
    }
    }
int main()
{   int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    if (rows<=0)
    {
        printf("Please enter a positive value.");
        return 0;
    }
    
    /*for(i=1;i<=rows;i++)// rows counter
    {
        for(space=1;space<=rows-i;space++)// loop to provide spaces for the pattern
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)// loop to enter the number for the pattern
        {
            printf("%d", num);
            num++;// makes it consecutive numbers
        }
        printf("\n");
    }
*/
pattern(rows);
    return 0;
}
