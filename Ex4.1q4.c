#include<stdio.h>
int main()
{
    float population=100000;
    int p,year=0;
    for(p=0;p<10;p++)
    {
        population=population+(10*population)/100;
        year++;
        printf("The Total Population by end of year %d is :%.2f",year,population);
        printf("\n");
    }
    return 0;
}
