/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
    private:
    int length(Node* &head)
    {
        Node* curr=head;
        int count=0;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        return count;
    }
    void insertAtTail(Node* &head,Node* &tail,int data)
    {
        Node* temp=new Node(data);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }

    }
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        int len1=length(head1);
        int len2=length(head2);
        Node* num1=head1;
         Node* num2=head2;
         Node* ansHead=NULL;
         Node* ansTail=NULL;
        while(num1!=NULL && num2!=NULL)
        {

            if(num1->data==num2->data)
            {
                insertAtTail(ansHead,ansTail,num1->data);
                num1=num1->next;
                num2=num2->next;
            }
            else if(num1->data<num2->data)
            {
                num1=num1->next;
            }
            else if(num1->data>num2->data)
            {
                num2=num2->next;
            }
        }
        return ansHead;

    }
};
