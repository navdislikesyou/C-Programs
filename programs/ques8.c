// Temperature Celcius into farhenheit
#include<stdio.h>
void main(){
	float c,f;
	printf("Enter temperature in Celcius:");
	scanf("%f",&c);
	f= (c*9/5)+32;
	printf("It is %.2f degree Fahrenheit.",f);
}
