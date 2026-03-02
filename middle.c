#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertFront(int value)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}
int findMiddle()
{
    struct node *slow = head;
    struct node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
int main()
{
    int n, i, x;
    struct node *temp;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insertFront(x);
    }
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\nMiddle Element: %d", findMiddle());
    return 0;
}
