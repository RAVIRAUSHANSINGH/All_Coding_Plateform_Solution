class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL || head->next==NULL){
           return head;  //for one sized LL
       }
       Node *prevptr=NULL; //1stptr for prev
       Node *currptr=head; //2nd ptr for curr
       Node*nextptr;       //3rdptr for next so that we dont loose coonection with next
       while(currptr!=NULL){//if we stop just one step before then last node will not be reverse
           nextptr=currptr->next; //storing current ka next in nextpointer
           currptr->next=prevptr; //pointing current pointe/head to previous ptr which is null first step for reversing

          //Now we will be move each pointer one step ahead
           prevptr=currptr; //moving previous ptr one step ahead
           currptr=nextptr;//moving current ptr on step ahead
           //current ptr will move one step at every run of while loop
       }
       return prevptr;
    }  
};