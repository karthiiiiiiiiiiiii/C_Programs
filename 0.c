#include<stdio.h>
int a=3;
signed int b=-5;
int main(){
    short int c=5,count=0;
    int d=9,e=7,f,g;
    static int h=8; 
    printf("h=%d\n",sizeof(int));
    count=b++;
    f=a+count+d;
    g=c+e;
    printf("the f,g values=%d,%d",f,g);
}