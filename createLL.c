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
