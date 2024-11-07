// delete element from specific position

#include<stdio.h>
void main(){
    int a[50],size,pos;
    printf("Enter the number of elements in array:");
    scanf("%d",&size);
    printf("Enter the elements for the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    } 
    printf("\nEnter the position of the element to be deleted:");
    scanf("%d",&pos);
    for(int i=pos-1;i<size;i++){
        a[i]=a[i+1];
    }
    size--;
    printf("The array is: ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}