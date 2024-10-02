//Percentage of 5 subjects
#include<stdio.h>
void main(){
    int math,sci,sst,eng,hindi,tm;
    float tp;
    printf("Enter the marks of Math:");
    scanf("%d",&math);
    printf("Enter the marks of Science:");
    scanf("%d",&sci);
    printf("Enter the marks of SST:");
    scanf("%d",&sst);
    printf("Enter the marks of English:");
    scanf("%d",&eng);
    printf("Enter the marks of Hindi:");
    scanf("%d",&hindi);
    tm=math+sci+sst+eng+hindi;
    tp=tm/5.0;
    printf("Total percentage = %.2f",tp);
}