//Input all sides of a triangle and check whether the triangle is valid or not
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is invalid.");
    }
}