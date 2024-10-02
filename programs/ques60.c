// GCD of two numbers
#include<stdio.h>
void main(){
    int n1,n2,gcd;
    printf("Enter the numbers:");
    scanf("%d %d",&n1,&n2);
    gcd=n1>n2?n2:n1;
    for(gcd;gcd>0;gcd--){
        if(n1%gcd==0 && n2%gcd==0){
            printf("The gcd of %d and %d is %d.",n1,n2,gcd);
            break;
        }
    }   
}