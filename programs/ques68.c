// Check if input alphabet is vowel or consonant
#include<stdio.h>
void main(){

    char a;
    printf("Enter the alphabet:");
    scanf("%c",&a);
    if(((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))==0){
        printf("Not an alphabet.");
    }
    else{
        switch(a){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("Its a vowel.");
                break;
            default :
                printf("Its a consonant.");
        }
    }
}