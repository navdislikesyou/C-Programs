//Number is divisible by 11 (Vedic Maths) DO WHILE
#include<stdio.h>
void main(){
    int n,temp,sum=0,sum2=0,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    do{
        if(count%2==0){
            sum=sum+temp%10;
            temp=temp/10;
        }
        else{
            sum2=sum2+temp%10;
            temp=temp/10;
        }
        count++;
    }while(temp!=0);
    if((sum-sum2)%11==0){
        printf("The number %d is divisible by 11.",n);
    }
    else{
        printf("The number %d is not divisible by 11.",n);
    }
}