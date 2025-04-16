#include<stdio.h>
#include<string.h>
char* Strcpy_OwnImple(char str1[],char str2[]){
    int i=0;
    while(str2[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
    return str1;
}
int main(){
    char Copy[20],Copy1[30];
    printf("Enter a str1:");
    scanf("%s",&Copy1);
    Strcpy_OwnImple(Copy,Copy1);
    printf("Copied in copy:%s",Copy);
    
}
