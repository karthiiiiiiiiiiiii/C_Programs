#include<stdio.h>
int main(){
    int amount,note_10,note_20,note_50,note_100,note_500,note_1;
    printf("enter amount:");
    scanf("%d",&amount);
    note_10=amount/10;
    amount %=10;
    note_20=amount/20;
    amount %=20;
    note_50=amount/50;
    amount %=50;
    note_100=amount/100;
    amount %=100;
    note_500=amount/500;
    amount %=500;
    note_1=amount;
    if(note_10){
        printf("10:%d\n",note_10);
    }
    if(note_20){
        printf("20:%d\n",note_20);
    }
    if(note_50){
        printf("50:%d\n",note_50);
    }
    if(note_100){
        printf("100:%d\n",note_100);
    }
    if(note_500){
        printf("500:%d\n",note_500);
    }
    if(note_1){
        printf("1:%d\n",note_1);
    }

    
}