// Greatest of two number
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a==b){
        printf("The numbers are equal.");
    }
    else if(a>b){
        printf("The number %d is greater.",a);
    }
    else{
        printf("The number %d is greater.",b);
    }
}