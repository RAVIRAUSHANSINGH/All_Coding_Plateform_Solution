
//Function to find the data of nth node from the end of a linked list.
int length(Node* head){
    int l=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}


int getNthFromLast(Node *head, int n)
{
       // Your code here
       int l=length(head);
       int d=l-n;
       if(d<0)
       return -1;
       Node *temp=head;
       while(d--){
           temp=temp->next;
       }
       return temp->data;
}

