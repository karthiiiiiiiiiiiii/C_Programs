#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c){
        printf("valid triangle\n");
    }
    else{
        printf("---");
    }

}