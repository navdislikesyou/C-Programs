// Check string is palindrome or not using for loop
#include<stdio.h>
#include<string.h>
void main(){
    char s[50];
    printf("Enter the string:");
    fgets(s,50,stdin);
    s[strcspn(s, "\n")] = 0;
    int len=strlen(s),yn=1;
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            yn=0;
            break;
        }
    }
    if(yn==0){
        printf("The string is not palindrome.");
    }
    else{
        printf("The string is a palindrome.");
    }
}