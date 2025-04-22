/*1.SIMPLE PROGRAM USING MACRO 
#include<stdio.h>
#define PI 3.1415
int main(){
    int r=5;
    float area=PI*r*r;
    printf("Area of circle:%f",area);
}
2.SIMPLE PROGRAM USING MACROS
#include<stdio.h>
#define MAX 100
int main(){
    printf("Maximum marks scored in exam is %d",MAX);
}
3.SIMPLE MACRO DEFINITION PRINTF()
#include<stdio.h>
#define MSSG printf("I like chocolates");
int main(void){
    MSSG;
    return 0;
}
4.WITHOUT PRINTF()
#include<stdio.h>
#define MSSG "I Like chocolates"
int main(){
    printf(MSSG);
    return 0;
}
5.MULTI MACRO DEFINITIONS
#include<stdio.h>
#define ICECREAM FLAVOUR
#define FLAVOUR "Butterstoch"
int main(void){
    printf(ICECREAM);
    return 0;
}*/