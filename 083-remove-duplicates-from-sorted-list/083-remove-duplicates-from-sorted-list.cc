/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
     int val;
     struct ListNode *next;
 };
#include <stdlib.h>
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *r = head,*pre = NULL;
    while (head)
    {
        if(pre&&head->val==pre->val){
            pre->next = head->next;
            struct ListNode *t = head;
            head = pre;
            free(t);
        }
        pre = head;
        head = head->next;
    }
    return r;
}
int main(){
    return 0;
}