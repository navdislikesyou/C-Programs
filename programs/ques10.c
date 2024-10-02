//factorial
#include<stdio.h>
void main(){
	int n,i,f=1;
	printf("Enter number to find factorial of:");
	scanf("%d",&n);
	if(n<0){
		printf("The factorial of negative number does not exist.");
	}
	else{
		for(i=1;i<=n;i++){
			f=f*i;
		}
		printf("The factorial of %d is %d.",n,f);
	}
}
