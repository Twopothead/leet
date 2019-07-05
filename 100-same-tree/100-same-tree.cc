#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if( (!p&&q) || (!q&&p))
        return false;
    if(!p&&!q)
        return true;
    if( isSameTree(p->left,q->left) && isSameTree(p->right,q->right) )
        return (p->val==q->val);
    else return false;
}
int main(){

    return 0;
}