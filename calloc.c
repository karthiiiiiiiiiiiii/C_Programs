#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,x,*arr,sum;
    float avg;
    printf("Enter size of array:");
    scanf("%d",&x);
    arr=(int *)calloc(x,sizeof(int));
    if(arr==NULL){
        printf("Array is full");
    }
    for(i=0;i<x;i++){
        printf("Elements in %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++){
        sum=sum+arr[i];
        avg=sum/x;
    }
    free(arr);
    printf("SUM:%d\n",sum);
    printf("AVERAGE:%2f",avg);
}
