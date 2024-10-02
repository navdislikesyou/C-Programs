//Number Is Divisible By 11 Using (VEDIC MATH)
#include<stdio.h>
void main(){
    int n,c,temp,sum1=0,sum2=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    c=0;
    while(temp!=0){
        if(c%2==0){
            sum1=sum1+(temp%10);
        }
        else{
            sum2=sum2+(temp%10);
        }
        c++;
        temp=temp/10;
    }
    if((sum1-sum2)%11==0){
        printf("The number %d is divisible by 11.",n);
    }
    else{
        printf("The number %d is not divisible by 11.",n);
    }
}