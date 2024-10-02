// If  character is alphabet or not

#include<stdio.h>
void main(){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z'){
        printf("The entered character is an alphabet.");
    }
    else{
        printf("The entered character is not an alphabet.");
    }
}
