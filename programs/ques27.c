//Enter the month number and find number of days in that month
#include<stdio.h>
void main(){
    int n;
    printf("Enter the month number:");
    scanf("%d",&n);
    if(n>12 || n<1){
        printf("Invalid month number");
    }
    else if(n==2){
        printf("There are 28 or 29 days.");
    }
    else if(n==4 || n==6 || n==9 || n==11){
        printf("There are 30 days.");
    }
    else{
        printf("There are 31 day.");
    }
}