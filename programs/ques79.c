// Change all input string into asterisk simultaneously
#include<stdio.h>
#include<conio.h>
void main(){
    char c='A',ch[]={"**********"};
    printf("Enter a string:");
    int i=0;
    while(c){
        c=getch();
        printf("%c\a",ch[i]);
    }
}