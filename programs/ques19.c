// If  character is alphabet or not

#include<stdio.h>
void main(){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("The entered character is lower case alphabet.");
    }
    else if(a>='A' && a<='Z'){
        printf("The entered character is upper case alphabet.");
    }
    else if(a>='0' && a<='9'){
        printf("The entered character is a digit.");
    }
    else{
        printf("The entered character is a special symbol.");
    }
}