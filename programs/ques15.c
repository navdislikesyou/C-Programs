// Greatest number among given three numbers
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("%d is the greatest among the three",a);
    }
    else if(b>=a && b>=c){
        printf("%d is the greatest among the three",b);
    }
    else{
        printf("%d is the greatest among the three",c);
    }
}