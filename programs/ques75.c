//remove duplicate item in array
#include<stdio.h>
void main(){
    int a[50],size;
    printf("Enter number of elements in the array:");
    scanf("%d",&size);
    printf("Enter the elements in the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    for(int i=0;i<size;i++){
        for(int j = i+1; j < size; j++){
            if(a[i] == a[j]){
                for(int k = j; k <size; k++){
                    a[k] = a[k+1];
                }
                j--;
                size--;
            }
        }
    }
    //size=size-count;
    printf("Edited array: ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}