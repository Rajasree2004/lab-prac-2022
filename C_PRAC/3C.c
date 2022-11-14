//QUEUE in LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct  node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void insert(int value){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;newnode->next=NULL;
    if(front==NULL) front=rear=newnode;
    else{
        rear->next=newnode;
        rear=newnode;
    }
    printf("\nSuccessfull");
}
void delete(){
    if(front==NULL) printf("Empty Queue");
    else{
        struct node *temp=front;
        front=front->next;
        printf("\nDeleted element: %d\n",temp->data);
        free(temp);
    }
}
void display(){
    if(front==NULL)printf("\nEmpty queue");
    else{
        struct node *temp=front;
        while(temp->next !=NULL){
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("%d-->NULL",temp->data);
    }
}
void main(){
    int ch,val;
    printf("\t\tMENU\n");
    printf("1.Insert\n2. Delete\n3. Display\n4. Exit\n");
    while(1){
        printf("Enter choice: ");scanf("%d",&ch);
        switch (ch){
            case 1: printf("\nEnter value: ");scanf("%d",&val);insert(val);break;
            case 2: delete();break;
            case 3:display();break;
            case 4: exit(0);
        }
    }
}