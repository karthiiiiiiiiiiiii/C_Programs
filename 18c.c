#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter n:");
    scanf("%d",&n);
    if(n>=0){
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }

printf("factorial of %d is %d",n,fact);
}
}