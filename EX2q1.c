#include <stdio.h>
/*int main (){
float c , Temperature ;
printf("Enter Temperature in celcius =");
scanf("%f" , &c);
Temperature = (( c*9/5)+32);
printf("The Temperature in Faherenheit is = %.2f" , Temperature );
return 0;
} */

//Using Functions
float celciustoFarh(float);
float celciustoFarh(float celcius){
return (9*celcius)/5+32 ;
}

int main () {
float c ;
printf("Enter Temperature in Celcius :");
scanf("%f",&c);

printf("The temperature in farhenite for %f is %f ", c , celciustoFarh(c) );
return 0;
}
