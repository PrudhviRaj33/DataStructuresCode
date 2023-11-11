//remove duplicates from a linked list




void duplicate(struct node *head1)
{
    struct node *temp=head1,*prev;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            if(temp->data==temp->next->data)
            {
               
            }
            else
            {
                printf("%d\n",temp->data);
            }
        }
        prev=temp;
        temp=temp->next;
    }
    printf("%d",prev->data);
}
