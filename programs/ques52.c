// Number of digits of a code DO WHILE
#include<stdio.h>
void main(){
    int n, d;
    printf("Enter the number:");
    scanf("%d",&n);
    d=0;
    if(n==0){
        printf("One digit.");
    }
    else{
        do{
            n=n/10;
            d++;
        }while(n!=0);
    }
    printf("The number of digits are %d.",d);
}