#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')){
        printf("%c is alphabet",ch);
    }
    else{
        printf("%c is not alphabet",ch);
    }
}