#include<stdio.h>
int main () {
float temp_c;
float temp_f;
printf("Enter the temperature in celsius : ");
scanf("%f",&temp_c);
 temp_f = (temp_c*1.8) + 32.0;
 printf("The temperature in fahrenheit is %.2f",temp_f);
 return 0;
}
