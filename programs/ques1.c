//calculate area and circumference of circle
#include <stdio.h>
void main(){
    float area,circumference,pi=3.14;
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("Area is %.2f sq units.\nCircumference is %.2f units.",area,circumference);
}