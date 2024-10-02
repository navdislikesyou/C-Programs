//Palindrome DO WHILE
#include<stdio.h>
void main(){
	int n,temp,rev,rem;
	printf("Enter number to check:");
	scanf("%d",&n);
	temp=n;
	rev=0;
	do{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}while(temp!=0);
	if(n==rev){
		printf("The number %d is a palindrome.",n);
	}
	else{
		printf("The number is not a palindrome.");
	}
}
