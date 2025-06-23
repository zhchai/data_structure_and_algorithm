#include "tree.hpp"
#include <iostream>

int main()
{
    /*
                1
               / \
              2   3
             / \
            4   5
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    std::cout << "preorder:";
    preorder(root);
    std::cout << std::endl;

    std::cout << "inorder:";
    inorder(root);
    std::cout << std::endl;

    std::cout << "postorder:";
    postorder(root);
    std::cout << std::endl;

    std::cout << "levelorder:";
    levelorder(root);
    std::cout << std::endl;

    return 0;
}