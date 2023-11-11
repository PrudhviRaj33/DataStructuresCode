//Reverse Display
void displayrev(struct node*head)
{
    if (head==NULL)
    {
        return ;
    }
    else
    {
        displayrev(head->next);
        printf("%d",head->data);
    }
     
}
