#include<stdio.h>
int main(){
    int n,i=1,count=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            printf("%d \n",i);
            count++;
        }
        i++;
    }
    printf("the total numbers are %d",count);
}
