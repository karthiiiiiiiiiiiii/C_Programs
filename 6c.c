#include<stdio.h>
int main(){
    int n;
    printf("enter year:");
    scanf("%d",&n);
    if(n%400==0||n%4==0 && n%100!=0){
            printf("%d is leap year",n);
        }
        else{
            printf("%d is not leap year",n);
        }
    }
