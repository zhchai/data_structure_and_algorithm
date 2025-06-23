#include "tree.hpp"
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void preorder(TreeNode* root)
{
    if(!root) return;
    std::cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void preorderIter(TreeNode* root)
{
    if(!root) return;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empyt())
    {
        TreeNode* node = st.top();st.pop();
        cout << node->val << " ";
        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
    }
}

void inorder(TreeNode* root)
{
    if(!root) return;
    inorder(root->left);
    std::cout << root->val << " ";
    inorder(root->right);
}

void postorder(TreeNode* root)
{
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    std::cout << root->val << " ";
}

void levelorder(TreeNode* root)
{
    if(!root) return;
    std::queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* curr = q.front(); q.pop();
        std::cout << curr->val << " ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}