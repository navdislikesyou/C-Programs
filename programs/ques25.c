// Check if number is divisible by 5 and 11 or not
#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%55==0){
        printf("%d is divisible by both2 5 and 11.",n);
    }
    else if(n%5==0){
        printf("%d is divisible by 5.",n);
    }
    else if(n%11==0){
        printf("%d is divisble by 11.",n);
    }
    else{
        printf("%d is not divisible by 5 or 11.",n);
    }
}