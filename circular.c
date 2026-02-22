#include<stdio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear  = -1;
void enQueue(int value)
{
    if((front == 0 && rear == SIZE-1) || (front == rear + 1))
    {
        printf("\nQueue is Full! Insertion not possible.\n");
        return;
    }
    if(front == -1)
    front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    printf("Insertion successful!\n");
}
void deQueue()
{
    if(front == -1)
    {
        printf("\nQueue is Empty! Deletion not possible.\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front]);
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}
int main()
{
    int choice, value;
    while(1)
    {
        printf("\n--- CIRCULAR QUEUE MENU ---\n");
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
            printf("Invalid choice!\n");
        }
    }
}
