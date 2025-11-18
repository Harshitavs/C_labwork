#include<stdio.h>
#include<string.h>
void revstring(char string[])
{
    int i,k,store;
    int length=strlen(string);
    for(i=0,k=length-1;i<k;i++,k--)
    {
        store=string[i];
        string[i]=string[k];
        string[k]=store;
    }
}
int main()
{
    char string[101];
    int i,length;
    printf("Enter the length of string\n");
    scanf("%d",&length);
    if(length<=0 || length>100)
    {
        printf("Enter a valid value for length");
        return 0;
    }
    printf("Enter the letters:\n");
    for(i=0;i<length;i++)
    {
        scanf(" %c",&string[i]);
    }
    string[length]='\0';
    printf("Word:%s\n",string);
    revstring(string);
    printf("Reversed Word:%s",string);
    
    
    return 0;
}
