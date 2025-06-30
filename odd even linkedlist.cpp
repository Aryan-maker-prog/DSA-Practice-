/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
   void insertAtTail(ListNode* &head,ListNode* &tail,int data)
    {
        ListNode* temp=new ListNode(data);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* curr=head;
        ListNode* headref=NULL;
        ListNode* tailref=NULL;
        int index=1;
        while(curr!=NULL)
        {
            if(index%2!=0)
            {
                  insertAtTail(headref,tailref,curr->val);
            }
             curr=curr->next;
             index++;

        }
        curr=head;
       index=1;

        while(curr!=NULL)
        {
            if(index%2==0)
            {
                 insertAtTail(headref,tailref,curr->val);
            }

            curr=curr->next;
            index++;
        }
        return headref;
    }
};
