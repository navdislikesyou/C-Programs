// Find if number is positive or negative
#include<stdio.h>
void main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a==0){
        printf("Zero is a neutral number.");
    }
    else if(a>0){
        printf("The entered number is POSITIVE.");
    }
    else{
        printf("The entered number is NEGATIVE.");
    }
}