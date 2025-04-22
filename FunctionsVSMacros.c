//1.FUNCTION VS MACRO FUNCTION
/*#include<stdio.h>
int cube(int x){
    return x*x*x;
}
int main(){
    int x,y; printf("enter a x value:");
    scanf("%d",&x);
    y=cube(x++);
    printf("y=%d,x=%d\n",y,x);
}*/
#include<stdio.h>
#define CUBE(x) ((x)*(x)*(x))
int main(){
    int a,b;
    printf("enter a value");
    scanf("%d",&a);
    b=CUBE(a++);
    printf("b=%d,a=%d\n",b,a);
}