//Area of triangle
#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    float s,ar;
    printf("Enter the sides:");
    scanf("%d %d %d",&a ,&b, &c);
    s=(a+b+c)/2;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        ar=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the triangle is:%.2f sq units",ar);
    }
    else{
        printf("Invalid sides for a triangle.");
    }
}