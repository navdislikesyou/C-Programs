// ARRAY
// Insert An Element Desired or Specific Position In An Array

#include<stdio.h>
void main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10},n,pos;
    printf("The array is:");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter the element you want to add:");
    scanf("%d",&n);
    printf("Enter the position where to add:");
    scanf("%d",&pos);
    //idk if i have to move all the elements after adding or just replace the specific element
    // replacing
    a[pos-1]=n;
    printf("The edited array is:");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}