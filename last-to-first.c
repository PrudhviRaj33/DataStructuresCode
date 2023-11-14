void lastfirst()
{
    struct node *temp=head,*prev;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    temp->next=head;
    head=temp;
    
}
