bool areIdentical(struct Node *head1, struct Node *head2)
{
	//code here
	while(head1!=NULL && head2!=NULL)
   {
       if(head1->data!=head2->data)
           return false;
       head1=head1->next;
       head2=head2->next;
   }
   return true;
}

/*Link of the question-----
https://practice.geeksforgeeks.org/problems/identical-linked-lists/1
*/