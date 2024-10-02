// Character is vowel or consonant
#include <stdio.h>
void main(){
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("The letter is a vowel.");
    }
    else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("The letter is a consonant.");
    }
    else{
        printf("That is not an alphabet.");
    }
}