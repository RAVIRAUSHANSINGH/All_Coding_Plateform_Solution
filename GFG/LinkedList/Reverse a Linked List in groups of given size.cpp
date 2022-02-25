class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;
        int count=0;
        while(currptr !=NULL and count<k){
            nextptr=currptr->next; 
           currptr->next=prevptr; 
           
           prevptr=currptr; 
           currptr=nextptr;
           count++;
           }
        //   Above code for reversing LL except Counter variable
          if(nextptr!=NULL){ //Recurvesly calling for other  part to reverse
              head->next= reverse(nextptr, k);
              
          }
        return prevptr;
    }
};