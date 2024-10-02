//Roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,root1,root2,real,imag;
    printf("Enter the coefficients of x^2, x and the constant:");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-(4*a*c);
    if(d==0){
        root1=(-b+sqrt(d))/(2*a);
        printf("The equation has real and equal roots %.2f",root1);
    }
    else if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("The equation has real and unique roots %.2f and %.2f",root1,root2);
    }
    else{
        real=(-b)/(2*a);
        imag=(sqrt(-d))/(2*a);
        printf("The roots are imaginary %.2f+%.2fi and %.2f-%.2fi");
    }
}