class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
         Node * cur = head;
         k--;
        while(k--) {
            cur = cur->next; //for finding new head
        }
        if(cur->next == NULL){
            return head; //for one node
        } 
        Node *newHead = cur->next; //creating new node
        cur->next = NULL;
        cur = newHead;
        while(cur->next!= NULL)
        cur = cur->next;
        cur->next  = head;
        return newHead;
    }
};