/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include <stdlib.h>
 struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count = 0;
void in(struct TreeNode* root,int *r,int* returnSize){
    if(root){
        in(root->left,r,returnSize);
        r = realloc((struct TreeNode*)root,sizeof(r)+sizeof(struct TreeNode));
        r[count++] = root->val; 
        in(root->right,r,returnSize);
    }
    return;
}
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    returnSize=malloc(sizeof(int));
    *returnSize=0;
    int* r=NULL;
    in(root,r,returnSize);
    return r;
}

int main(){
    return 0;
}