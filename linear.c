#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear  = -1;
void enQueue(int value)
{
    if(rear >= SIZE - 1)
    {
        printf("\nQueue is full!!! Insertion is not possible!!!\n");
    }
    else
    {
        if(front == -1)
        front = 0;
        rear++;
        queue[rear] = value;
        printf("Insertion success!!!\n");
    }
}
void deQueue()
{
    if(front == -1 || front > rear)
    {
        printf("\nQueue is empty!!! Deletion is not possible!!!\n");
    }
    else
    {
        printf("Deleted : %d\n", queue[front]);
        front++;
        if(front > rear)
        front = rear = -1;
    }
}
int main()
{
    int choice, value;
    while(1)
    {
        printf("\n--- LINEAR QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enQueue(value);
            break;
            case 2:
            deQueue();
            break;
            case 3:
            return 0;
            default:
            printf("Invalid choice!!!\n");
        }
    }
}
