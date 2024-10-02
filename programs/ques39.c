//Check if number is palindrome
#include<stdio.h>
void main(){
    int n,rev,r,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(rev==n){
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
}