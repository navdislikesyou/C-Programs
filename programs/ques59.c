//Sort a floating array
#include<stdio.h>
void main(){
    float a[5],temp;
    printf("Enter 5 floating elements for array:");
    for(int i=0;i<5;i++){
        scanf("%f",&a[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%f ",a[i]);
    }
}