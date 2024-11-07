// print "I AM IDIOT" instead of your name using array
#include<stdio.h>
#include<conio.h>
void main(){
    char name[]="I AM IDIOT";
    char c='A';
    int i=0;
    printf("Enter your name:");
    while(c){
        c=getch();
        printf("%c\a",name[i]);
        i++;
        if(i==10){
            printf(" ");
            i=0;
        }
    }
}