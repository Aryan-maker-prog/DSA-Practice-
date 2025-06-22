/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {

  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here

        Node* curr=head;
        Node* prev=NULL;
        Node* forward=NULL;
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
       }
        int count=0;
        int ans=-1;
        Node* temp=prev;
        while(temp!=NULL && count<k)
        {

            count++;
            if(count==k)
            {
                ans=temp->data;
            }
            temp=temp->next;
        }
        return ans;
     }

};
