/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        int st=0;
        int end=arr.size()-1;
        bool ans=false;
        while(st<=end)
        {
            if(arr[st]==arr[end])
            {
                ans=true;
                st++;
                end--;
            }
            if(arr[st]!=arr[end])
            {
                ans=false;
                break;
            }
        }
        return ans;
    }
};
