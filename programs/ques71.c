// positive negative or zero
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    switch(n>0?1:n<0?2:3){
        case 1:
            printf("Positive");
            break;
        case 2:
            printf("Negative");
            break;
        case 3:
            printf("Zero");
            break;
    }
}