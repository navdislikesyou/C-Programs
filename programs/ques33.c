//Calculate profit or loss
#include<stdio.h>
void main(){
    float ap,sp;
    printf("Enter the price of the product:");
    scanf("%f",&ap);
    printf("Enter the selling price for the product:");
    scanf("%f",&sp);
    if((sp-ap)>0){
        printf("There was a profit of %.2f",(sp-ap));
    }
    else if((sp-ap)==0){
        printf("There was no profit or loss.");
    }
    else{
        printf("There was a loss of %.2f",(ap-sp));
    }
}