// Maximum between two numbers
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    switch(num1>num2?1:num2>num1?2:3){
        case 1:
            printf("%d is greater.",num1);
            break;
        case 2:
            printf("%d is greater.",num2);
            break;
        case 3:
            printf("Both are equal.");
            break;
    }
}