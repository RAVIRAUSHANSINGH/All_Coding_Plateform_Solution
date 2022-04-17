int length(Node* head){
    int l=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int l1=length(head1);
    int l2=length(head2);
    int d=0; //we will store diff of length of two LL so that we can start from equal point
    Node *ptr1;
    Node *ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
        
    }else{
        d=l2-l1;
        ptr2=head1;
        ptr1=head2;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }while(ptr1!=NULL and ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
         ptr2=ptr2->next;
    }
    return -1;
}
//LOGIC--find length of both LL then find differnce of length so that we can travesre from same point;
