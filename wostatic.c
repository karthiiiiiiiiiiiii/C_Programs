#include<stdio.h>
int main(){
    int n=5;
    static int arr[n];
    for(int i=0;i<n;i++){
        printf("%d",i+1);
        scanf("%d",&arr[i]);
    }

}