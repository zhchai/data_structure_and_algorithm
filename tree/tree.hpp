#include <cstddef>
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode* root);
void inorder(TreeNode* root);
void postorder(TreeNode* root);
void levelorder(TreeNode* root);