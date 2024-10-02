// GCD of two numbers
#include<stdio.h>
int gcd(int a, int b){
    if (b==0){
        return a;
    }
    return gcd(b, a%b);
}
void main(){
    int c,d;
    printf("Enter first number: ");
    scanf("%d",&c);
    printf("Enter second number: ");
    scanf("%d",&d);
    printf("The GCD is %d",gcd(c,d));
}