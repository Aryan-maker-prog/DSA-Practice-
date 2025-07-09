#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;
node(int d)
{
    this->data=d;
    this->left=NULL;
    this->right=NULL;
}
};
node* buildTree(node* root)
{
    cout<<"enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"enter the data inserted in the left of the "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data inserted in the right of the "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
void inOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root=NULL;
    root=buildTree(root);
    cout<<"levelOrder traversal is:"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"inorder traversal is:"<<endl;
    inOrderTraversal(root);
     cout<<endl;
    cout<<"preorder traversal is:"<<endl;
    preOrderTraversal(root);
     cout<<endl;
    cout<<"postorder traversal is:"<<endl;
    postOrderTraversal(root);
     cout<<endl;

}
