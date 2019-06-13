#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    ListNode *head = (ListNode *)malloc(sizeof(ListNode));
    ListNode *p=l1,*q=l2,*cur=head,*tmp = head;
    int carry = 0,sum = 0;
    while (p!=NULL || q!=NULL)
    {
        
        sum = (p==NULL?0:p->val)+(q==NULL?0:q->val)+carry;
        carry = sum / 10;
        cur = (ListNode *)malloc(sizeof(ListNode));
        cur->val = sum % 10;
        cur->next = NULL;
        tmp->next = cur;
        tmp=tmp->next;
        if(p!=NULL)p = p->next;
        if(q!=NULL)q = q->next;
    }
    if(carry!=0){
        cur = (ListNode *)malloc(sizeof(ListNode));
        cur->val = carry;
        cur->next =NULL;
        tmp->next = cur;
        tmp = tmp->next; 
    }
    cur->next = NULL;
    ListNode *l = head->next;
    head->next = NULL;
    free(head);
    return l;
}
// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.
int main(){
    ListNode *l1,*l1_1,*l1_2,*l2,*l2_1,*l2_2;
    l1 = (ListNode *)malloc(sizeof(ListNode));
    l1_1 = (ListNode *)malloc(sizeof(ListNode));
    l1_2 = (ListNode *)malloc(sizeof(ListNode));
    l2 = (ListNode *)malloc(sizeof(ListNode));
    l2_1 = (ListNode *)malloc(sizeof(ListNode));
    l2_2 = (ListNode *)malloc(sizeof(ListNode));

    // l1->val = 2,l1->next = l1_1;
    // l1_1->val = 4,l1_1->next = l1_2;
    // l1_2->val = 3,l1_2->next = NULL;
    // l2->val = 5,l2->next = l2_1;
    // l2_1->val = 6,l2_1->next = l2_2;
    // l2_2->val = 4,l2_2->next = NULL;

    l1->val = 2,l1->next = l1_1;
    l1_1->val = 4,l1_1->next = NULL;
    l2->val = 5,l2->next = l2_1;
    l2_1->val = 6,l2_1->next = l2_2;
    l2_2->val = 4,l2_2->next = NULL;

    // l1->val = 5,l1->next = NULL;
    // l2->val = 5,l2->next = NULL;
    
    ListNode *l = addTwoNumbers(l1,l2);
    while (l != NULL)
    {
        printf("%d ",l->val);
        l = l->next;
    }
    
    return 0;
}