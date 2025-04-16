#include<stdio.h>
int main(){
    static int arr[]={10,20,30,40,50};
    printf("Array is declared with fixed size\n");
    printf("[");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("]");
}