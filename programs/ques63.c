// Calculator using switch case
#include<stdio.h>
void main(){
    int a,b;
    char operator;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter the operator(+,-,*,/):");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
            printf("%d %c %d = %d",a,operator,b,a+b);
            break;
        case '-':
            printf("%d %c %d = %d",a,operator,b,a-b);
            break;
        case '*':
            printf("%d %c %d = %d",a,operator,b,a*b);
            break;
        case '/':
            printf("%d %c %d = %d",a,operator,b,a/b);
            break;
        default:
            printf("Invalid Input");
            break;
    }
}