//STACK in LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top=NULL;
void push(int value){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    if(top==NULL) newnode->next=NULL;
    else newnode->next=top;
    top=newnode;
    printf("\nSuccessfull");
}
void pop(){
    if(top==NULL) printf("\nStack is empty");
    else{
        struct node *temp =top;
        printf("\nDeleted element: %d",temp->data);
        top=temp->next;
        free(temp);
    }
}
void display(){
    if(top==NULL) printf("\nStack is empty");
    else{
        struct node *temp =top;
        while(temp->next!=NULL){
            printf("|%d|-->",temp->data);
            temp=temp->next;
        }
        printf("|%d|-->NULL",temp->data);
    }
}
void main(){
    int ch,val;
    printf("\tMainMenu\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    while(1){
        printf("Enter choice: ");scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("\nEnter to value to insert: ");scanf("%d",&val);
                push(val);break;
        case 2: pop();break;
        case 3: display();break;
        case 4:exit(0);
        }
    }
}