swap elements in a linked list
example:
 (1->2->3->4 to 2->1->4->3)

void swap(struct node *head)
{
    struct node *temp;
    temp=head;
    int a;
    while(temp!=NULL && temp->next!=NULL)
    {
        a=temp->data;
        temp->data=temp->next->data;
        temp->next->data=a;
        temp=temp->next->next;
    }
}
