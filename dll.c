/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head;
struct node* GetNewNode(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void insertathead(int x){
    struct node* newnode = GetNewNode(x);
    if(head==NULL){
        head = newnode; 
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void reverse(){
    struct node* temp = head;
    if(temp==NULL) return;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("reverse is ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
void print(){
    struct node* temp = head;
    printf("List is ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    insertathead(2);print();
    insertathead(4);print();
    insertathead(6);print();
    insertathead(8);print();
    insertathead(10);print();
    reverse();
    return 0;
}
