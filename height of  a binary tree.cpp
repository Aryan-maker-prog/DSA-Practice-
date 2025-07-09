/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
         if(node==NULL)
         {
             return -1;
         }
         int left=height(node->left);
         int right=height(node->right);
         int ans=max(left,right)+1;
         return ans;

    }
};
