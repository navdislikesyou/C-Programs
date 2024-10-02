//IP address generation
#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("The IP address is:");
    for(int i=0;i<4;i++){
        int r=rand() % 256;
        printf("%d",r);
        if(i<3){
            printf(".");
        }
    }
}