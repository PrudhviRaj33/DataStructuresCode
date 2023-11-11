#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head1=NULL;
struct node *head2=NULL;
struct node* addnode(struct node*head,int data)
{
    struct node *ptr;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    return head;
}
void print(struct node*head)
{
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
    printf("\n");
}
void common(struct node*head1,struct node*head2)
{
 struct node*i,*j;
 i=head2;
 j=head1;
 while(i!=NULL)
 {
     while(j!=NULL)
     {
         if((i->data)==(j->data))
         {
             printf("%d\n",j->data);
         }
         j=j->next;
     }
     i=i->next;
     j=head1;
 }
}

int main()
{
int l=0;
head1=addnode(head1,10);
head1=addnode(head1,15);
head1=addnode(head1,20);
head2=addnode(head2,10);
head2=addnode(head2,20);
head2=addnode(head2,30);
head2=addnode(head2,40);
print(head1);
print(head2);
common(head1,head2);

}
