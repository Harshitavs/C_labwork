#include <stdio.h>
/*int main (){
printf("Enter a year:");
scanf("%d" , &year);
//Days count form 01/01/0001 to 01/01/year
long totaldays=0;
for (int i=1; i<year; i++){
//check for leap year 
if ((i%4==0 && i%100!=0)|| (i%400==0))
{
total Days +366;
}
else {
total days += 365;
}
}
//01/01/0001 was monday , so day=(totaldays%7)
int daysofweek + (totaldays)%7;
//0=monday , 1=tuesday, ......,6=sunday
char *days[]={"monday" , "tuesday" ,"wednesday" ,"thursday","friday","saturday","sunday"};
printf("1st January %d is a %s\n";year,days [daysofweek]);*/
int leapyear(int year) {
if ((year%4==0 && year%100!=0)|| (year%400==0))
{
return 1; }
else {
return 0;
} 
}
int Count_Days(int year) {
int days=0 ;
for (int i=1 ; i<year ; i++) {
if (leapyear(i))
days += 366;
else 
days += 365;}
return days ; 
}
void printeddays( int day) {
switch (day) {
case 0 : printf("Monday\n");break ;
case 1 : printf("Tuesday\n"); break;
case 2 : printf("Wednesday\n"); break;
case 3: printf("Thursday\n"); break ;
case 4 : printf("Friday\n"); break;
case 5: printf("Saturday\n"); break ;
case 6 : printf("Sunday\n"); break ;
}
}

int main () {
int daysofweek ,totaldays ,year ;
printf("Enter a year:");
scanf("%d",&year);

totaldays = Count_Days(year);
daysofweek = totaldays % 7;

printf("1ST January of  %d is " , year);
printeddays(daysofweek);
return 0;
}

