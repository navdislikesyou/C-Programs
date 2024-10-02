//Reverse a given number DO WHILE
#include<stdio.h>
void main(){
    int n,rev,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    do{
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }while(n!=0);
    printf("The reverse is %d",rev);
}