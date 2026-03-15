#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head=NULL;
void append(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        temp->prev=NULL;
        head=temp;
        return;
    }
    struct Node* p=head;
    while(p->next!=NULL)
    p=p->next;
    p->next=temp;
    temp->prev=p;
}
void deleteLast(){
    struct Node* temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->prev->next=NULL;
    free(temp);
}
void display(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        append(x);
    }
    deleteLast();
    display();
    return 0;
}
