//delete end
void deleteend()
{
    struct node*ptr,*prev;
    ptr=head;
    while(ptr->next!=NULL)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
}
