/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include <stdio.h>
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
};
int maxDepth(struct TreeNode* root){
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 1;
    return ( maxDepth(root->left) >= maxDepth(root->right) ) ? maxDepth(root->left)+1 :maxDepth(root->right)+1;
}
int main(){
    return 0;
}
