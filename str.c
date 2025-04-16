#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter a string:");
    scanf("%s",str);
    do{
        printf("%c\n",str[i]);
        i++;
    }while(str[i]!='\0');
    printf("\n");
}