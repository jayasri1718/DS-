#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
int is_empty()
{
    if(top == -1)
    return 1;
    else
    return 0;
}
int is_full()
{
    if(top == MAX - 1)
    return 1;
    else
    return 0;
}
void push(int value) 
{
    if (is_full())
    printf("Stack is Full");
    else 
    {
        top++;
        stack[top] = value;
        printf("Insertion success");
    }
}
void pop()
{
    if (is_empty())
    printf("Stack is Empty");
    else 
    {
        printf("Deleted: %d\n", stack[top]);
        top--;
    }
}
void peep() 
{
    if (is_empty())
        printf("Stack is Empty");
    else
        printf("Top element is: %d\n", stack[top]);
}
int main() 
{
    int choice, value;
    while (1) 
    {
        printf("\n1.Push\n2.Pop\n3.Peep\n4.Check Empty\n5.Check Full\n6.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            push(value);
            break;
            case 2:
            pop();
            break;
            case 3:
            peep();
            break;
            case 4:
            if (is_empty())
            printf("Stack is Empty");
            else
            printf("Stack is Not Empty");
            break;
            case 5:
            if (is_full())
            printf("Stack is Full");
            else
            printf("Stack is Not Full");
            break;
            case 6:
            default:
            printf("Wrong selection");
        }
    }
    return 0;
}