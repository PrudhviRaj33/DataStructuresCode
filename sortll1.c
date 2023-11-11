void sort(struct node *head)
{
   struct node *i,*j;
   int a;
   i=head;
   while(i!=NULL)
   {
       j=i->next;
       while(j!=NULL)
       {
           if(i->data>j->data)
           {
               a=i->data;
               i->data=j->data;
               j->data=a;
           }
           j=j->next;
       }
       i=i->next;
   }
}
