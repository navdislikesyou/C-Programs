// Remove vowels from a string
#include<stdio.h>
#include<string.h>
void main(){
    char s[50];
    printf("Enter the string:");
    fgets(s, 50, stdin);
    int j=0;
    for(int i=0;i<50;i++){
        switch(s[i]){
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
                break;
            default:
                s[j++]=s[i];
        }
    }
    s[j]='\0';
    printf("The edited string:%s",s);
}