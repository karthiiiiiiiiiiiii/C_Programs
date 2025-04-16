#include<stdio.h>
int main(){
    int n;
    printf("enter a week number:");
    scanf("%d",&n);
    if(n==1){
        printf("%d is SUNDAY",n);
    }
    else if(n==2){
        printf("%d is MONDAY",n);
    }
    else if(n==3){
        printf("%d is TUESDAY",n);
    }
    else if(n==4){
        printf("%d is WEDNESDAY",n);
    }
    else if(n==5){
        printf("%d is THURSDAY",n);
    }
    else if(n==6){
        printf("%d is FRIDAY",n);
    }
    else{
        printf("%d is SATURDAY",n);
    }
}