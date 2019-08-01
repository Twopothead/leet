
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
struct ListNode{
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

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p = head,*p2;
    struct ListNode *r = (struct ListNode *)malloc(sizeof(struct ListNode));
    r->next = NULL;
    while (p)
    {
        p2 = p->next;
        p->next = r->next;
        r->next = p;
        p = p2;
    }
    p = r->next;
    r->next = NULL;
    free(r);
    return p;
}

int main(){
// Input: 1->2->3->4->5->NULL
// Output: 5->4->3->2->1->NULL
    ListNode *l1,*l2,*l3,*l4,*l5;
    l1 = (ListNode *)malloc(sizeof(ListNode));
    l2 = (ListNode *)malloc(sizeof(ListNode));
    l3 = (ListNode *)malloc(sizeof(ListNode));
    l4 = (ListNode *)malloc(sizeof(ListNode));
    l5 = (ListNode *)malloc(sizeof(ListNode));
    l1->val = 1,l1->next = l2;
    l2->val = 2,l2->next = l3;
    l3->val = 3,l3->next = l4;
    l4->val = 4,l4->next = l5;
    l5->val = 5,l5->next = NULL;
    ListNode *l =  reverseList(l1);

    while (l != NULL)
    {
        printf("%d ",l->val);
        l = l->next;
    }
    
    return 0;
}