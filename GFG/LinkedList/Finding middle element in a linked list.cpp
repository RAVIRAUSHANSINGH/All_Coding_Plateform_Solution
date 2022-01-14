class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node *slow = head;
        Node *fast = head;
        while(fast!=NULL && fast->next!=NULL)
       {
           fast = fast->next->next;
           slow = slow->next;
       }
       return slow->data;
        
    }
};

/* Link of the question----
https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/
*/