// Roots of quadratic equation
#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,m,n;
    printf("Enter the coefficient of x^2, x and the constant:");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-4*a*c;
    switch(d>0?2:d<0?3:1){
        case 1:
            m=-(b/(2*a));
            printf("The root is %.2f",m);
            break;
        case 2:
            m=(-b+sqrt(d))/(2*a);
            n=(-b-sqrt(d))/(2*a);
            printf("The roots are %.2f and %.2f",m,n);
            break;
        case 3:
            m=-(b/(2*a));
            n=sqrt(-d)/(2*a);
            printf("The roots are %.2f + %.2fi and %.2f - %.2fi",m,n,m,n);
            break;
    }
}