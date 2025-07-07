/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head==NULL)
        {
            return true;
        }
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            if(fast==slow)
            {
                return true;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};
