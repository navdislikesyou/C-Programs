// Read integer and print first three powers
#include <stdio.h>
void main(){
    int n;
    printf("Enter integer(N):");
    scanf("%d",&n);
    printf("N^1=%d\nN^2=%d\nN^3=%d",n,n*n,n*n*n);
}