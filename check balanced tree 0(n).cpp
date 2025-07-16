/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
  public:
   pair<bool,int>isBalancedFast(Node* root){
        if(root==NULL)
        {
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int> left=isBalancedFast(root->left);
        pair<bool,int> right=isBalancedFast(root->right);

        bool leftAns=left.first;
        bool rightAns=right.first;

        bool diff=abs(left.second-right.second)<=1;
        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1;
        if(leftAns&& rightAns&& diff)
        {
            ans.first=1;
        }
        else
        {
            ans.first=0;
        }
        return ans;
    }
  public:
    bool isBalanced(Node* root) {
        // Code here
        return isBalancedFast(root).first;

    }
};
