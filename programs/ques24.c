// Voting Eligibility
#include<stdio.h>
void main(){
    int a;
    printf("Enter your age:");
    scanf("%d",&a);
    if(a>17){
        printf("You are eligible to vote.");
    }
    else{
        printf("You are not eligible to vote.");
    }
}