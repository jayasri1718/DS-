#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head = NULL;
void insertFront(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = head;
    if(head != NULL)
    head->prev = temp;
    head = temp;
}
void display() {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main() {
    int n, x;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        insertFront(x);
        printf("Node Inserted\n");
        display();
        printf("\n");
    }
}
