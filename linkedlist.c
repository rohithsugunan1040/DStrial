#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

struct node *createnode(int data)
{
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        exit(0);
    }
    newnode->next=NULL;
    newnode->data=data;
    return (newnode);
}

void insertAtbeg(int data)
{
    struct node *newnode=createnode(data);
    //struct node *ptr=head;
    newnode->next=head;
    head=newnode;
    //printf("successfully added at beg");


}

void deleteatF()
{
    struct node * ptr=head;
    struct node * temp;
    if(head==NULL)
    {
        printf("list empty");
        exit(0);
    }
    temp=head;
    head=temp->next;
    free(temp);
    
    
}

void print()
{
    struct node * ptr=head;
    if(head==NULL)
    {
        printf("empty list");
        exit(0);
    }
    
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->data);
        ptr=ptr->next;
    }


}
void main()
{
    insertAtbeg(43);
    insertAtbeg(78);
    deleteatF();

    insertAtbeg(67);
    print();


}