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
