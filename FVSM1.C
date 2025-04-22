//2.MAXIMUM OF TWO NUMBERS USING MACRO DEF VS FUNCTION
/*#include<stdio.h>
#define MAX(x,y) (((x)>(y))?(x):(y)) 
int main(){
    int x=5,y=6;
    printf("Maximum of %d and %d is %d",x,y,MAX(x,y));
}*/
#include<stdio.h>
#define MIN(x,y) (((x)<(y))?(x):(y))
int main(){
    int x=5,y=6;
    printf("Minimum of %d and %d is %d",x,y,MIN(x,y));
}/*
#include<stdio.h>
int MAX(int x,int y){
    int max;
    max=(x>y)?x:y;
    return max;
}
int MIN(int x,int y){
int min;
min=(x<y)?x:y;
return min; 
}
int main(){
        int x=5,y=6;
        printf("Maximum of %d and %d is %d",x,y,MAX(x,y));
         printf("Minimum of %d and %d is %d",x,y,MIN(x,y));
    }*/