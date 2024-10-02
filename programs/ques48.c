//Fibonacci series DO WHILE
#include<stdio.h>
void main(){
    int n,t1=0,t2=1,nt;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    do{
        printf("%d ",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
        n--;
    }while(n>0);
}