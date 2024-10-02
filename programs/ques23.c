// Check if date is correct or not
#include<stdio.h>
void main(){
    int date,month,year;
    printf("Enter the date(1-31):");
    scanf("%d",&date);
    printf("Enter the month(1-12):");
    scanf("%d",&month);
    printf("Enter the year:");
    scanf("%d",&year);
    if(date<1 || month<1 || month>12 || date>31){
        printf("The date is invalid.");
    }
    else if(month==2){
        if(year%4==0 && year%100!=0 || year%400==0){
            if(date>29){
                printf("The date is invalid.");
            }
            else{
                printf("The date is valid.");
            }
        }
        else{
            if(date>28){
                printf("The date is invalid.");
            }
            else{
                printf("The date is valid.");
            }
        }
    }
    else if(month==4 || month==6 || month==9 || month==11){
        if(date>30){
            printf("The date is invalid.");
        }
        else{
            printf("The date is valid.");
        }
    }
    else{
        printf("The date is valid.");
    }
}