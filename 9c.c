#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')){
        printf("%c is alphabet",ch);
    }
    else if(ch>='0'&& ch<='9'){
        printf("%c is number",ch);
    }
    else{
        printf("%c is special character",ch);
    }
}