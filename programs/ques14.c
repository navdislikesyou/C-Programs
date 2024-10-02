//LCM of two numbers
#include<stdio.h>
int gcd(int a, int b){
    if (b==0){
        return a;
    }
    return gcd(b, a%b);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
void main(){
    int c,d;
    printf("Enter first number: ");
    scanf("%d",&c);
    printf("Enter second number: ");
    scanf("%d",&d);
    printf("The LCM of the two numbers is: %d",lcm(c,d));
}