// Check if armstrong or not DO WHILE
#include<stdio.h>
#include<math.h>
void main(){
    int a,n,temp,sum=0,p=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    do{
        p++;
        temp=temp/10;
    }while(temp!=0);
    temp=n;
    do{
        a=temp%10;
        sum=sum+pow(a,p);
        temp=temp/10;
    }while(temp!=0);
    if(sum==n){
        printf("The number is an Armstrong number.");
    }
    else{
        printf("The number is not an Armstrong number.");
    }
}