//Denomination in amount DO WHILE
#include<stdio.h>
void main(){
    int a,n,i;
    int d[]={2000,500,200,100,50,20,10,5,2,1};
    printf("Enter the amount:");
    scanf("%d",&a);
    i=0;
    do{
        n=a/d[i];
        a=a%d[i];
        printf("The number of %d denomination is %d.\n",d[i],n);
        i++;
    }while(i<10);
}