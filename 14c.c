#include<stdio.h>
int main(){
    float a,b,c;
    int tot;
    printf("enter a,b,c angles:");
    scanf("%f%f%f",&a,&b,&c);
    tot=a+b+c;
    if(tot==180){
        printf("it is valid triangle");
    }
    else{
        printf("invalid triangle");
    }

}