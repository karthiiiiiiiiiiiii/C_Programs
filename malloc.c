#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,x,max,*arr;
    printf("Enter size of array:");
    scanf("%d",&x);
    arr=(int *)malloc(x*sizeof(int));
    if(arr==NULL){
        printf("Array is full");
    }
    else{
        for(i=0;i<x;i++){
            printf("Elements in %d arr: ",i+1);
            scanf("%d",&arr[i]);
        }
        for(i=0;i<x;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printf("Maximum:%d",max);    

}
free(arr);
return 0;
}