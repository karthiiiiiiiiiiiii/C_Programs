#include<string.h>
#include<stdio.h>
char *Strcpy_OwnImple(char *str1,char *str2){
    while(*str2!='\0'){
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
    return str1;
}
    int main(){
        char Copy[20],Copy1[30];
        printf("Enter a str1:");
        scanf("%s",&Copy1);
        Strcpy_OwnImple(Copy,Copy1);
        printf("Copied in copy:%s",Copy);
        
    }
