#include<stdio.h>
#include<stdlib.h>
struct Field{
    int value;
    struct Field *next;
}*start=NULL;
typedef struct Field node;
int main(){
    node *newnode,*temp;
    newnode=(node*)malloc(sizeof(node));
    printf("\nenter data:");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else{
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    printf("Linked list is:");
    temp=start;
    while(temp!=NULL){
        printf("%d->",temp->value);
        temp=temp->next;
    }
    printf("NULL");
    free(newnode);
}