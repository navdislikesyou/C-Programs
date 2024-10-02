// Simple Interest
#include <stdio.h>
void main(){
    int p;
    float r,t,i,ta;
    printf("Enter the principle amount:");
    scanf("%d",&p);
    printf("Enter the rate of interest (per annum):");
    scanf("%f",&r);
    printf("Enter the time (in years):");
    scanf("%f",&t);
    i=p*r*t/100;
    ta=p+i;
    printf("The Total amount repaid would be %.2f rs and the simple interest would be %.2f rs",ta,i);
}