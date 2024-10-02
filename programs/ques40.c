//count the number of digits of an integer
#include<stdio.h>
void main(){
    int n,d=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0){
        printf("The number has 1 digits.");
    }
    else{
        while(n!=0){
            n=n/10;
            d++;
        }
        printf("The number has %d digits.",d);
    }
}