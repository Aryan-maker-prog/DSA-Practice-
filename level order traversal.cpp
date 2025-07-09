/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        if(root==NULL)
        {
            return {};
        }
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>arr;
        while(!q.empty())
        {
            Node* curr=q.front();
            q.pop();
            arr.push_back({curr->data});
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        return arr;
    }
};
