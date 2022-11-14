//SINGLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp,*first,*prev;
struct node *create(struct node *first){
    int item;
    printf("\nEnter data item: ");scanf("%d",&item);
    while(item!=999){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=item;
        temp->next=NULL;
        if(first==NULL) first=temp;
        else prev->next=temp;
        prev=temp;
        printf("\nEnter data element: ");scanf("%d",&item);
    }
    return(first);
}
struct node *insertion(struct node *first){
    struct node *newnode;
    int item,pos,i;
    printf("\nEnter data and position: ");scanf("%d%d",&item,&pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=item;
    if(pos==1 || first==NULL){
        newnode->next=first;
        first=newnode;
    }
    else{
        i=2; temp=first;
        while(i<pos && temp->next!=NULL){
            temp=temp->next;i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return(first);
}
struct node *deletion(struct node *first){
    int x;
    printf("\nEnter data to be selected: ");scanf("%d",&x);
    if(first==NULL) printf("\nEmpty list");
    else{
        prev=NULL;temp=first;
        while(temp!=NULL && temp->data!=x){
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL) printf("Not found");
        else if(prev==NULL) first=first->next;
        else prev->next=temp->next;
    }
    return (first);
}
void display(struct node *first){
    temp=first;
    if(first==NULL) printf("\nEmpty list");
    else{
        while(temp->next!=NULL){
            printf("|%d|-->",temp->data);
            temp=temp->next;
        }
        printf("|%d|-->NULL",temp->data);
    }
}
void find(struct node *first){
    int x,i=1;
    printf("\nEnter position: ");scanf("%d",&x);
    if(first==NULL) printf("\nFirst is empty");
    else{
        prev=NULL; temp=first;
        while(temp!=NULL && i!=x){
            prev=temp;
            temp=temp->next;i++;
        }
        if(temp==NULL) printf("Not found");
        else printf("\n%d is found st %d",temp->data,x);
    }
}
void main(){
    int ch;
    do{
        printf("\tMenu\n1. Create\n2. Insert\n3. Delete\n4. Search\n5. Empty\n6. Display\n7. Exit\n Enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Type 999 to stop"); first = create(first);
                    printf("\nList is:\n");display(first);break;
            case 2: first=insertion(first); printf("\nList is: \n");
                    display(first);break;
            case 3: first=deletion(first);printf("List is\n");
                    display(first);break;
            case 4: find(first);break;
            case 5:first=NULL;printf("Empty List");break;
            case 6: display(first);break;
            case 7:exit(0);break;
        }
    }while(ch<=7);
}