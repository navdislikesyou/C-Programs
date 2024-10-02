//Reverse of a number DO WHILE
#include<stdio.h>
void main(){
	int n,temp,rev,rem;
	printf("Enter number to reverse:");
	scanf("%d",&n);
	temp=n;
	rev=0;
	do{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}while(temp!=0);
	printf("The reversed number is %d.",rev);
}
