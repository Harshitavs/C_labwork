#include<stdio.h>
float bmi(float height ,float  weight);
float bmi(float height ,float weight) {
return weight / (height*height) ;
}
void yourbmi_category( float bmivalue) {
printf("Your bmi is %.2f\n", bmivalue);
if (bmivalue< 15) {
printf("STARVATION"); }
else if (bmivalue>15 && bmivalue<=17.5) {
printf ("ANOREXIC"); }
else if (bmivalue>17.5 && bmivalue<=18.5) {
printf ("UNDERWEIGHT"); }
else if (bmivalue>18.5 && bmivalue<= 24.9) {
printf ("IDEAL");  }
else if (bmivalue>24.9 && bmivalue<=25.9 ) {
printf ("OVERWEIGHT"); }
else if ( bmivalue>26 && bmivalue<=30) {
printf("SLIGHTLY OVERWEIGHT"); }
else if (bmivalue> 30 && bmivalue<= 39.9) {
printf("OBESE");  }
else if (bmivalue>40) 
{ 
printf("MORBIDITY OBESE");  }
else {
printf("Invalid range");
}
}
int main () {
float weight , height , BMI;
printf("Enter weight of person (in kgs):");
scanf ("%f",&weight );
printf("Enter height of person (in mts):");
scanf("%f",&height);
if ( weight<=0 || height<=0) {
 printf (" Enter  positive non zero value");
return 1;
}
 BMI= bmi(height,weight);
 yourbmi_category(BMI);
return 0;
}








