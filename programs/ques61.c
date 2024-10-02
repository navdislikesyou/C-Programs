// Temperature fahrenheit to celsius and vice versa SWITCH CASE
#include<stdio.h>
void main(){
    int o;
    float f,c;
    printf("Enter the operation you want\n1 for F to C\n2 for C to F\nEnter:");
    scanf("%d",&o);
    switch (o){
        case 1:
            printf("Enter the temperature in F:");
            scanf("%f",&f);
            c=(f-32)*5/9;
            printf("The temperature is %.2f C.",c);
            break ;
        case 2:
            printf("Enter the temperature in C:");
            scanf("%f",&c);
            f=(c*9/5)+32;
            printf("The temperature is %.2f F.",f);
            break ;
        default:
            printf("Invalid input");
            break;
    }   
}