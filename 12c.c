#include<stdio.h>
#include<string.h>
int main(){
    int y,month;
    printf("enter year:\n");
    scanf("%d",&y);
    printf("enter month:");
    scanf("%d",&month);
    if(month==1|| month==3|| month==5|| month==7|| month==8|| month==10||month==12){
        printf("%d has 31 days",month);
    }
    else if(month==4||month==6|| month==9|| month==11){
        printf("%d has 30 days",month);
    }
    else {
    if(y%400==0||y%4==0 && y%100!=0){
        printf("%d has 29 days",month);
    }
    else{
        printf("%d has 28 days",month);
    }
    }
}