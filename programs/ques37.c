//Display fibonacci series
#include<stdio.h>
void main(){
    int n,t1,t2,nt,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    t1=0;
    t2=1;
    i=1;
    while(i<=n){
        printf("%d ",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
        i++;
    }
}