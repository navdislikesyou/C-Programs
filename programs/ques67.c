// Number of days in month
#include<stdio.h>
void main(){

    int month,year;
    printf("Choose the month you want to check:\nJanuary: 1\nFebruary: 2\nMarch: 3\nApril: 4\nMay: 5\nJune: 6\nJuly: 7\nAugust: 8\nSeptember: 9\nOctober: 10\nNovember: 11\nDecember: 12\nYour Input:");
    scanf("%d",&month);
    switch(month){
        case 2:
            printf("For February enter the year you want to check this in:");
            scanf("%d",&year);
            if(year%4==0 && year%100!=0 || year%400==0){
                printf("There are 29 days.");
            }
            else{
                printf("There are 28 days.");
            }
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("There are 31 day.");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("There are 30 days.");
            break;
        default:
            printf("Invalid Input");
            break;
    }
}