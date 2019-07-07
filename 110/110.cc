/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include <stdlib.h>
#include <stdio.h>
struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};
int depth(struct TreeNode* root){
    if(!root)
        return 0;
    return ( depth(root->left) >= depth(root->right) ) ? depth(root->left)+1 :depth(root->right)+1;
}
bool isBalanced(struct TreeNode* root){
    if(!root)
        return true;
    int diff = depth(root->left)-depth(root->right);
    if(diff<0)
        diff = -diff;
    if(diff<=1 && isBalanced(root->left) && isBalanced(root->right) )
        return true;
    return false;
}
int main(){
    return 0;
}