//LCM DO WHILE
#include<stdio.h>
void main(){
	int a,b,lcm;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	lcm=a>b?a:b;
	do{
		if(lcm%a==0 && lcm%b==0){
			break;
		}
		lcm++;
	}while(1);
	printf("The LCM is %d.",lcm);
}
