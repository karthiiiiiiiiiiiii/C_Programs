#include<stdio.h>
struct complex{
    float real;
    float imag;
}c1,c2,c3;
int main(){
    struct complex c1,c2,c3;
    scanf("%f%f",&c1.real,&c2.real);
    scanf("%f%f",&c1.imag,&c2.imag);
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    printf("Complex number is %f+%fi\n",c3.real,c3.imag);
}