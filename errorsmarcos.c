/*1.macro definition should not end with semicolon
#include<stdio.h>
#define MAX 100;//here it shows error
int main(){
    printf("Maximum marks scored is %d",MAX);
}
2.error in macro definition
#include<stdio.h>
#define PROD (x,y)(x*y)//in this line it assums y as pointer and throws an error
int main(){
    int x=5,y=8;
    printf("Print the product of 2 numbers is %d",PROD);
}
3.This program shows error that complier gets confused usage of same variable
#include<stdio.h>
#define SWAP(dtype,x,y) {dtype t;t=x, x=y, y=t;}
int main(){
    int t=2,s=5;//if a=2,b=5 is declared then
    SWAP(int,s,t);
    printf("s=%d,t=%d",s,t);//so output is a=5,b=2
}
4.This program represents misuse of increments operators using macro function
#include<stdio.h>
#define CUBE(x) ((x)*(x)*(x))
int main(){
    int a=10,b;
    b=CUBE(a++);// it is incremented 3 times i.e b={(a++)*(a++)*(a++)}
    printf("b=%d,a=%d\n",b,a);//a=13 is printed 
}*/