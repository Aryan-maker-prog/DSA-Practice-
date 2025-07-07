
/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
    private:
    void insertAtTail(Node* &head,Node* &tail,int value)
    {
       Node* newNode=new Node(value);
       if(head==NULL)
       {
           head=newNode;
           tail=newNode;
       }
       else
       {
           tail->next=newNode;
           tail=newNode;
       }
    }
  public:
    Node* segregate(Node* head) {
        // code here

        Node* curr=head;
        Node* headRef=NULL;
        Node* tailRef=NULL;
        int count0=0;
        int count1=0;
        int count2=0;
        while(curr!=NULL)
        {
            if(curr->data==0)
            {
                count0++;
            }
            if(curr->data==1)
            {
               count1++;
            }
            if(curr->data==2)
            {
                count2++;
            }
            curr=curr->next;
        }
        while(count0--)
        {
            insertAtTail(headRef,tailRef,0);
        }
        while(count1--)
        {
           insertAtTail(headRef,tailRef,1);
        }
        while(count2--)
        {
            insertAtTail(headRef,tailRef,2);
        }
       return headRef;
    }
};
