//Generic root DO WHILE
#include<stdio.h>
void main(){
    int n,sum,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=0;
    temp=n;
    do{
        sum=0;
        do{
            sum=sum+temp%10;
            temp=temp/10;
        }while(temp!=0);
        temp=sum;
    }while(temp>9);
    printf("The Generic Root is %d.",sum);
}