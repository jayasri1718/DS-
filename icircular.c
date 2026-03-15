#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* create(int arr[],int n){
    struct Node *head=NULL,*temp,*last=NULL;
    for(int i=0;i<n;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL){
            head=last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
    }
    last->next=head;
    return head;
}
struct Node* insertPos(struct Node* head,int x,int pos){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    struct Node* p=head;
    for(int i=1;i<pos-1;i++)
    p=p->next;
    temp->next=p->next;
    p->next=temp;
    return head;
}
void display(struct Node* head,int n){
    struct Node* temp=head;
    for(int i=0;i<n;i++){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,x,pos;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&x);
    scanf("%d",&pos);
    struct Node* head=create(arr,n);
    head=insertPos(head,x,pos);
    display(head,n+1);
    return 0;
}
