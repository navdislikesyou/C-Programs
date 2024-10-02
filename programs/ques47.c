//sum of n natural numbers do while
#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the number of natural numbers:");
    scanf("%d",&n);
    do{
        sum=sum+n;
        n--;
    }while(n>0);
    printf("The sum is %d",sum);
}