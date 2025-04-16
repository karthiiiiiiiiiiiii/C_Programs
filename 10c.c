#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("%c is lowercase",ch);
    }
    else{
        printf("%c is uppercase",ch);
    }
}