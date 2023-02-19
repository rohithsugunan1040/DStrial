#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void createnode(struct node *ptr, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    head = ptr;
    newnode->data = data;
    if (head == NULL)
    {
        newnode->next=head;
    }
}
