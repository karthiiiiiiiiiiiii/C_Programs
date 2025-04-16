#include<stdio.h>
int A;
void myProgram(){
    int A=2;
    while(A==2){
        int A=3;
        printf("A1=%d\n",A);
        break;
    }
    printf("A2=%d\n",A);
}
void main(){
    myProgram();
    printf("A3=%d\n",A);
}