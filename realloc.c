#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,x=5,max,*arr;
    arr=(int *)malloc(x*sizeof(int));
    if(arr==NULL){
        printf("Array is full");
    }
    for(i=0;i<x;i++){
        printf("Element in %d:",i+1);
        scanf("%d",&arr[i]);
    }
    x=10;
    arr=(int *)realloc(arr,x*sizeof(int));
    if(arr==NULL){
        printf("Array is full we cannot reallocate");
    }
    else{
    for(i=5;i<x;i++){
        printf("Element in %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum in complete array:%d",max);
    }
free(arr);
return 0;
}