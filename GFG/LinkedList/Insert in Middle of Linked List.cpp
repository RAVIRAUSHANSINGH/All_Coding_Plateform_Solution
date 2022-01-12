Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
   struct Node *ptr;
   struct Node *fast;
   struct Node *slow;
   if(head==NULL)
       return NULL;
   slow=(struct Node *)malloc(sizeof(struct Node));
   slow->data=x;
   ptr=head;
   fast=head;
   while(1)
   {
       if(fast->next==NULL || fast->next->next==NULL)
           break;
       fast=fast->next->next;
       ptr=ptr->next;
   }
   slow->next=ptr->next;
   ptr->next=slow;
   return head;
	
}