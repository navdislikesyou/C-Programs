//read and print elements of array using recursion
#include<stdio.h>
void readele(int ar[], int size, int index){
    if(index>=size){
        return;
    }
    scanf("%d",&ar[index]);
    readele(ar,size,index+1);
}
void printele(int ar[],int size,int index){
    if(index>=size){
        return;
    }
    printf("%d ",ar[index]);
    printele(ar,size,index+1);
}
void main(){
    int arr[10];
    printf("Enter 10 elements:");
    readele(arr,10,0);
    printf("Elements are:");
    printele(arr,10,0);
}