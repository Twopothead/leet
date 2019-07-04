/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <stdio.h>
#include <stdlib.h>
struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
struct TreeNode* invertTree(struct TreeNode* root){
    struct TreeNode *T;
    T = root;
    
    
}
int main(){
    TreeNode *root;
    root = (TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = 4;
    root->left = (TreeNode*)malloc(sizeof(struct TreeNode));
    root->right = (TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->val = 7;
    root->right->val = 2;
    root->left->left = (TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->right = (TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->left->val = 9;
    root->left->right->val = 6;
    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right->left = NULL;
    root->left->right->right = NULL;
    root->right->left = (TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->right = (TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->left->val = 3;
    root->right->right->val = 1;
    root->right->left->left = NULL;
    root->right->left->right = NULL;
    root->right->right->left = NULL;
    root->right->right->right = NULL;
    invertTree(root);
    return 0;
}

