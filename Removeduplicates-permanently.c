//remove duplicates permanently from a single linked list(not printing)

void removeduplicate()
{
    struct node*temp=head,*k,*prev;
   while(temp!=NULL)
   {
       if(temp->next!=NULL)
       {
            if(temp==head)
            {
                k=temp;
            }
            if(temp->data!=temp->next->data)
            {
                if(temp->data==k->data)
                {
                   
                }
                else
                {
                    k->next=temp;
                    k=k->next;
                }
            }
       }
       prev=temp;
       temp=temp->next;
   }
   k->next=prev;
}
