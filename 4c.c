#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    (n%5==0 && n%11==0)?printf("%d is divisible by 5 and 11",n):printf("%d is not divisible",n);
    return 0;
}