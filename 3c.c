#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    (n>0)?printf("Positive"):((n==0)?printf("Zero"):printf("Negative"));
}