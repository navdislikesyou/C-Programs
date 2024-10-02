//Generic root
#include<stdio.h>
void main(){
    int n,s=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>9){
        s=0;
        temp=n;
        while(temp!=0){
            s=s+temp%10;
            temp=temp/10;
        }
        n=s;
    }
    printf("The generic root is %d.",s);
}