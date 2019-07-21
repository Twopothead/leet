#include <stdio.h>
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
struct ListNode* insertionSortList(struct ListNode* head){
    for (struct ListNode *p = head; p != NULL; p=p->next)
    {
        int key = p->val;
        struct ListNode *q = head;
        while (q && q!=p)
        {
            if(q->val>key){
                int a = q->val;
                q->val = key;
                key = a;
            }
            q=q->next;
        }
        p->val = key;
    }
    return head;
}
int main(){
    return 0;
}