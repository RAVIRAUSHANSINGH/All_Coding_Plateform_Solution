class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       swap(del->data, del->next->data);
      Node *temp = del->next;
      del->next = temp->next;
      delete temp;
    }

};