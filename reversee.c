#include <stdio.h>
#define MAX 100
int queue[MAX],front = -1, rear = -1,stack1[MAX], stack2[MAX],top1 = -1, top2 = -1;
void enqueue(int value)
{
    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1)
    front = 0;
    queue[++rear] = value;
}
void push1(int value)
{
    stack1[++top1] = value;
}
int pop1()
{
    return stack1[top1--];
}
void push2(int value)
{
    stack2[++top2] = value;
}
int pop2()
{
    return stack2[top2--];
}
void reverseQueue()
{
    int i;
    for(i = front; i <= rear; i++)
    {
        push1(queue[i]);
    }
    front = 0;
    rear = -1;
    while(top1 != -1)
    {
        enqueue(pop1());
    }
}
void display()
{
    for(int i = front; i <= rear; i++)
    printf("%d ", queue[i]);
}
int main()
{
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        enqueue(x);
    }
    printf("Original queue: ");
    display();
    reverseQueue();
    printf("\nReversed queue: ");
    display();
    return 0;
}
