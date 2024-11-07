//Print all negative elements in an array
#include<stdio.h>
void main(){
    int arr[100],size,cnt=0;
    printf("Enter number of elements:");
    scanf("%d",&size);
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe negative elements are:");
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
            cnt++;
        }
    }
    if(cnt==0){
        printf("None");
    }
}