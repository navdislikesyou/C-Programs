//Calculate the sum of n natural numbers
#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter sum of how many natural numbers is to be calculated:");
    scanf("%d",&n);
    while(n>0){
        sum+=n;
        n--;
    }
    printf("The sum is %d.",sum);
}