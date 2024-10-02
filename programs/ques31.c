//Check if triangle is Isosceles, Equilateral or scalene
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        if(a==b && b==c){
            printf("The triangle is Equilateral.");
        }
        else if(a!=b && b!=c && a!=c){
            printf("The triangle is scalene triangle.");
        }
        else{
            printf("The triangle is Isosceles triangle.");
        }
    }
    else{
        printf("The triangle is invalid.");
    }
}