//identical lists or not(same size and same numbers with same position number)



int identical(struct node*head1,struct node*head2)
{
    struct node *i,*j;
    i=head1;
    j=head2;
    while((i!=NULL) && j!=NULL)
    {
        if(i->data!=j->data)
        {
            return 0;
        }
        i=i->next;
        j=j->next;
       
    }
    if(i==NULL && j==NULL)
    {
        return 1;
    }
    else
      return 0;
   
}
