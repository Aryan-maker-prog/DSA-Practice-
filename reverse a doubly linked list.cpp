/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        stack<int >st;
        DLLNode* temp=head;
        while(temp!=NULL)
        {
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            temp->data=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
    }
};
