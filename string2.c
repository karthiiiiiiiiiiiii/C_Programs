#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i=0;
    printf("enter characters:");
    ch=getchar();
    while(ch!='\n'){
        str[i]=ch;
        i++;
        ch=getchar();
    }
    str[i]='\0';
    printf("\nthe string is:\n");
    i=0;
    while(str[i]!='\0'){
        putchar(str[i]);
        i++;
    }
    printf("\n");
}