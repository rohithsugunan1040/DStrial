<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
struct Node 
    {
        int data;
        struct Node* next;
    }*temp=NULL;

struct Node* head=NULL;    
void createNode( int data)
{
     struct Node * newnode=(struct Node*)malloc(sizeof(struct Node));
      temp=head;
   
     newnode->data=data;
      newnode->next=NULL;
     if (head==NULL)

     {
       
        head=temp=newnode;
     }
     else
     {
        temp->next=newnode;
        temp=newnode;

     }
     
}

void displaynode()
{
    struct Node*ptr=head;
    if(ptr==NULL)
    {
        printf("the list is empty");
        return;

    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf(" %d ",ptr->data);
            ptr=ptr->next;
        }

    }
}

void main()
{
    int data;
    int op;
    int choice=1;
    while (choice=1)
    {
        printf("\n1.Insert Node\n2.Display Node");
        printf("\nenter choice ");
        scanf("%d",&op);
        switch(op)
            {
                case 1:
                    {
                        printf("enter the data ");
                        scanf("%d",&data);
                        createNode(data);
                        break;
                    }
                case 2:
                    {
                        displaynode();
                        break;
                    }
                default: printf("invalid choice ");
                         exit(0);

            }
        
    }
    
}
=======
#include<stdio.h>
#include<stdlib.h>
struct Node 
    {
        int data;
        struct Node* next;
    }*temp=NULL;

struct Node *head=NULL;    
void createNode(struct Node*head, int data)
{
     if (head == NULL)
    {
        head =malloc(sizeof(struct Node));
        head->next = NULL;
        head->data = data;
    }
    else
    {
        temp =malloc(sizeof(struct Node));
        temp->next= head;
        temp->data = data;
        head = temp;
    }
}

void displaynode(struct Node*head)
{
    struct Node*ptr=head;
    if(ptr==NULL)
    {
        printf("the list is empty");
        return;

    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }

    }
}

void main()
{
    int data;
    int op;
    while (1)
    {
        printf("1.Insert Node\n2.Display Node");
        printf("\nenter choice ");
        scanf("%d",op);
        switch(op)
            {
                case 1:
                    {
                        printf("enter the data ");
                        scanf("%d",data);
                        createNode(head,data);
                        break;
                    }
                case 2:
                    {
                        displaynode(head);
                        break;
                        
                    }

            }
        
    }
    
}
>>>>>>> 2c80df6cb89c8f566c29cbd1430b3f03d3ce47c5
