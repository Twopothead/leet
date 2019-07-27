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
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(!l1&&!l2) return l1;
    struct ListNode *p1 = l1,*p2 = l2;
    struct ListNode *p= (struct ListNode *)malloc(sizeof(struct ListNode)),*head  = p;
    while (p1||p2)
    {
        if(!p1){
            p->next = p2; 
            p2 = p2->next;
        }
        else if(!p2){
            p->next = p1; 
            p1 = p1->next;
        }
        else if(p1->val<=p2->val){
            p->next = p1;
            p1 = p1->next;
        }else { 
            p->next = p2;
            p2 = p2->next;
        }
        p = p->next;
    }
    struct ListNode *t = head;
    head = head ->next;
    free(t);
    return head;
}
int main(){
    return 0;
}