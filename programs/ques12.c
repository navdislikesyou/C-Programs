// Area of circle
#include<stdio.h>
void main(){
    int r;
    float pi=3.14,ar;
    printf("Enter the radius:");
    scanf("%d",&r);
    ar=pi*r*r;
    printf("The area of circle is %.2f sq units.",ar);
}