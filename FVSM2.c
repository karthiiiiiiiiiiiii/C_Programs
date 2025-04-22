/*#include<stdio.h>
#define ISLEAP(y) ((y%400==0)||(y%4==0&&y%100!=0))
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    printf("%d is leap year",year,ISLEAP(year));
}*/
#include<stdio.h>
int ISLEAP(int y){
    if((y%400==0)||(y%4==0&&y%100!=0)){
        return y;
    }
    
}
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    printf("%d is leap year",year,ISLEAP(year));
}
