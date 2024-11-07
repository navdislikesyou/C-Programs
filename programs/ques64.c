// Find The Grade Of Given Marks
#include<stdio.h>
void main(){
    int n,g;
    printf("Enter the marks(out of 100):");
    scanf("%d",&n);

    if(n<0 || n>100){
        printf("Invalid marks.");
    }
    else{
        g=n/10;
        switch (g) {
        case 9:
        case 10:
            printf("The grade is A.");
            break;
        case 8:
            printf("The grade is B.");
            break;
        case 7:
            printf("The grade is C.");
            break;
        case 6:
            printf("The grade is D.");
            break;
        default:
            printf("The grade is F.");
            break;
    }
    }
}