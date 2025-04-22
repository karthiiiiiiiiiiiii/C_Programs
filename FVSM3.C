#include<stdio.h>
#define ADD(x,y) ((x)+(y))
#define PROD(x,y) ((x)*(y))
#define SUB(x,y) ((x)-(y))
#define DIV(x,y) ((x)/(y))
int main(){
    int a=3,b=5;
    float p=0.5,q=1.5;
    printf("%d\n",ADD(a,b));
    printf("%d\n",PROD(a,b));
    printf("%d\n",SUB(10,5));
    printf("%d\n",DIV(20,5));
    printf("%.2f\n",ADD(p,q));
}/*
#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int Prod(int x,int y){
    return x*y;
}
int prod(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}
int main(){
    int a=3,b=5;
    float p=0.5,q=1.5;
    printf("%d\n",add(a,b));
    printf("%d\n",Prod(a,b));
    printf("%d\n",sub(10,5));
    printf("%d\n",div(20,5));
}*/
