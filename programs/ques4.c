// Persons name in abbreviated form
#include <stdio.h>

int main() {
    char f[10], m[10], l[10];
    printf("Enter your full name: ");
    scanf("%s %s %s", f, m, l);
    printf("The name in abbreviated form is: %c. %c. %c.\n", f[0], m[0], l[0]);
    return 0;
}