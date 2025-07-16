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
    private:
    int height(Node* root)
    {
        if(root==NULL)
        {
            return true;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return ans;
    }
  public:
    bool isBalanced(Node* root) {
        // Code here
        if(root==NULL)
        {
            return true;
        }
        int left=isBalanced(root->left);
        int right=isBalanced(root->right);
        int diff=abs(height(root->left)-height(root->right))<=1;
        if(left && right && diff)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
