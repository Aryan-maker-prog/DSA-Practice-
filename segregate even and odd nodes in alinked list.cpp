// User function template for C++

/*
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

class Solution {
    private:
    void insertAtTail(Node* &headref,Node* &tailref,int d)
    {
        Node* temp=new Node(d);
        if(headref==NULL)
        {
            headref=temp;
            tailref=temp;
        }
        else
        {
            tailref->next=temp;
            tailref=tailref->next;
        }
    }
  public:
    Node* divide(Node* head) {
        // code here
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        Node* newHead=NULL;
        Node* newTail=NULL;
        Node* curr=head;

        while(curr!=NULL)
        {
            if(curr->data%2==0)
            {
                insertAtTail(newHead,newTail,curr->data);
            }
            curr=curr->next;
        }
        curr=head;
        Node* tail=head;
        while(curr!=NULL)
        {
            if(curr->data%2!=0)
            {
                insertAtTail(newHead,newTail,curr->data);
            }
            curr=curr->next;
        }
        return  newHead;
    }
};
