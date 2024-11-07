// Calculate radius, circumference, volume of a cylinder
#include<stdio.h>
void main(){
    int operator;
    float pi=3.14,radius,circumference,volume,height;
    printf("Enter the operation to be done:\n1:Find Radius of cylinder\n2:Find Circumference of the cylinder\n3:Find volume of cylinder\n");
    scanf("%d",&operator);
    switch(operator){
        case 1:
            printf("Enter the circumference:");
            scanf("%f",&circumference);
            radius=circumference/(2*pi);
            printf("The radius is %.2f",radius);
            break;
        case 2:
            printf("Enter the radius:");
            scanf("%f",&radius);
            circumference=2*pi*radius;
            printf("The circumference is %.2f",circumference);
            break;
        case 3:
            printf("Enter the radius:");
            scanf("%f",&radius);
            printf("Enter the height:");
            scanf("%f",&height);
            volume=pi*radius*radius*height;
            printf("The volume is %.2f",volume);
            break;
        default:
            printf("Invalid operation.");
    }
}