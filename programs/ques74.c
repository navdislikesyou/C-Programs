// Insert An Element Desired or Specific Position In An Array

#include<stdio.h>
void main(){
    int a[]={1,2,3,4,5,6,7,8,9,10},n,pos,temp,temp2;
    /////////0,1,2,3,4,5,6,7,8,9
    printf("The array is:");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter the element you want to add:");
    scanf("%d",&n);
    printf("Enter the position where to add:");
    scanf("%d",&pos);
    // moving all elements
    temp=a[pos-1];
    a[pos-1]=n;
    for(int i=pos;i<11;i++){
        temp2=a[i];
        a[i]=temp;
        temp=temp2;
    }
    printf("The edited array is:");
    for(int i=0;i<11;i++){
        printf("%d ",a[i]);
    }
}