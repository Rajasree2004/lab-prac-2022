//Queue-Array
#include <stdio.h>
 #include <stdlib.h>
#define MAX 50

int queue_array[MAX];
int rear = - 1;
int front = - 1;
void enQueue()
{
    int add_item;
    if (rear == MAX - 1) printf("Queue Overflow \n");
    else
    {
        if (front == - 1) front = 0;
        printf("Inset the element in queue : ");scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}
void deQueue()
{
    if (front == - 1 || front > rear) printf("Queue Underflow \n");
    else
    {
        printf("Element deQueued from queue is : %d\n", queue_array[front]);
        front ++;
    }
}
 
void display()
{
    int i;
    if (front == - 1) printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++) printf("%d ", queue_array[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("1.enQueue element to queue \n2.deQueue element from queue \n3.Display all elements of queue \n4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: enQueue();break;
            case 2: deQueue();break;
            case 3: display();break;
            case 4: exit(0);
            default: printf("Wrong choice \n");
        }
    }
} 
 

 
