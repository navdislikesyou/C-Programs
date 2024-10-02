// Count the number of notes in the given amount
#include<stdio.h>
void main(){
    int n,twothousand,fivehundred,twohundred,hundred,fifty,twenty,ten,r;
    printf("Enter the amount:");
    scanf("%d",&n);
    twothousand=n/2000;
    r=n%2000;
    fivehundred=r/500;
    r=r%500;
    twohundred=r/200;
    r=r%200;
    hundred=r/100;
    r=r%100;
    fifty=r/50;
    r=r%50;
    twenty=r/20;
    r=r%20;
    ten=r/10;
    r=r%10;
    printf("The denomination are\nTwo thousand:%d notes\nFive hundred:%d notes\nTwo hundred:%d notes\nHundred:%d notes\nFifty:%d notes\nTwenty:%d notes\nTen:%d notes\nThe rest %d rs would be in coins.",twothousand,fivehundred,twohundred,hundred,fifty,twenty,ten,r);
}