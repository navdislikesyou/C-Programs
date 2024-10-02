// Gross salary of an employee
#include<stdio.h>
void main(){
    int bs,ta,o;
    float hra,da,gs;
    printf("Enter the Basic Salary amount:");
    scanf("%d",&bs);
    printf("Enter the DA percentage:");
    scanf("%f",&da);
    printf("Enter the HRA percentage:");
    scanf("%f",&hra);
    printf("Enter the TA amount:");
    scanf("%d",&ta);
    printf("Enter the other allowance amount:");
    scanf("%d",&o);
    gs=bs+(bs*da/100)+(bs*hra/100)+ta+o;
    printf("The Gross Salary of the employee is: %.2f rs",gs);
}