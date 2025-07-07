/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        pair<Node *, Node *>result;
        if(head==NULL || head->next==NULL)
        {
            result.first=NULL;
            result.second=NULL;
            return result;
        }
        int count=1;
        Node* temp=head;
        while(temp->next!=head)
        {
            count++;
            temp=temp->next;
        }
        Node* curr=head;
        int mid=(count+1)/2;
        for(int i=1;i<mid;i++)
        {
            curr=curr->next;
        }
        Node* head1=head;
        Node* head2=curr->next;
        curr->next=head1;
        temp->next=head2;
        result.first=head1;
        result.second=head2;
        return result;
    }
};
