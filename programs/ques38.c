//LCM of two numbers
#include<stdio.h>
void main(){
    int a,b,lcm;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    lcm=(a>b)?a:b;
    while(1){
        if(lcm%a==0 && lcm%b==0){
            break;
        }
        lcm++;
    }
    printf("The lcm is %d",lcm);
}