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
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr=head;
        int count=1;
        while(curr!=NULL)
        {
            curr=curr->next;
            count++;
        }
        int ans;
        if(count%2==0)
        {
           ans=(count/2);
           int count2=1;
           while(count2!=ans)
           {
            head=head->next;
            count2++;
           }
        }
        else if(count%2!=0)
        {
           ans=count/2;

           while(ans--)
           {
            head=head->next;

           }
        }

        return head;
    }
};
