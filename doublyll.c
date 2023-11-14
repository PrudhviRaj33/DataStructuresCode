#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node*next1;
    int data;
    struct node *next2;
};
struct node *head=NULL;
void addnode(int data)
{
    struct node *ptr,*prev;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next1=NULL;
    newnode->next2=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next2!=NULL)
        {
            prev=ptr;
            ptr=ptr->next2;
        }
        ptr->next2=newnode;
        newnode->next1=ptr;
    }
}
void print()
{
    struct node *ptr;
    ptr=head;
    while(ptr->next2!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next2;
    }
    printf("%d\n",ptr->data);
}
int main()
{
int l=0;
addnode(1);
addnode(2);
addnode(4);
addnode(10);
addnode(11);
print();
}

