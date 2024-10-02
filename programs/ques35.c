//Check if number is armstrong or not
#include<stdio.h>
#include<math.h>
void main(){
    int n,temp,a,sum=0,p;
    printf("Enter the number:");
    scanf("%d",&n);\
    temp=n;
    while(temp!=0){
        temp=temp/10;
        p++;
    }
    temp=n;
    while(temp!=0){
        a=temp%10;
        sum=sum+pow(a,p);
        temp=temp/10;
    }
    if(sum==n){
        printf("The entered number is an Armstrong number");
    }
    else{
        printf("Its not an Armstrong number.");
    }
}