#include<stdio.h>
int main(){
    int a=10,b=5,c=15,max;
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d is max",max);
}