/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
bool even(struct ListNode* head){
    bool is_even=true;
    struct ListNode *p = head,*pre = p;
    while (p)
    {
        pre = p;
        p = p->next;
        is_even = !is_even;
    }
    return is_even;
}
struct ListNode* swapPairs(struct ListNode* head){
    if(!head||!head->next)
        return head;
    // printf("%d",even(head));
    struct ListNode* e = NULL;
    bool is_even = even(head);
    if(!is_even){
        struct ListNode*d = head;
        do{
            d = d->next;
        }while (d->next->next);
        e = d->next;
        d->next = NULL;
    }
    struct ListNode *head1=(struct ListNode*)malloc(sizeof(struct ListNode)),*head2=(struct ListNode*)malloc(sizeof(struct ListNode));
    head1->next = NULL,head2->next = NULL;
    struct ListNode *p,*t;
    p = head;
    bool odd = true;
    while (p)
    {
        t = p;
        if(odd){
            p = p->next;
            t->next = head1->next;
            head1->next = t;
        }else 
        {
            p = p->next;
            t->next = head2->next;
            head2->next = t;
        }
        odd = !odd;
    }
    struct ListNode *H=(struct ListNode*)malloc(sizeof(struct ListNode)),*pre;
    H->next = NULL;
    p = head1->next;
    pre = head1;
    odd = true;
    while (p)
    {
        t = p;
        pre->next = p->next;
        t->next = H->next;
        H->next = t;
        odd = !odd;
        if(odd){
            p = head1->next;
            pre = head1;
        }else 
        {        
            p = head2->next;
            pre = head2;
        }
    }
    if(!is_even){
        p = H;
        while (p->next)
        {
            p = p->next;
        }
        p->next = e;
    }
    struct ListNode *r = H->next;
    free(H);
    free(head1);
    free(head2);
    return r;
}
int main(){
    // struct ListNode n1,n2,n3,n4,n5,n6;
    // n1.val = 1;
    // n2.val = 2;
    // n3.val = 3;
    // n4.val = 4;
    // n5.val = 5;
    // n6.val = 6;
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // n5.next = &n6;
    // n6.next = NULL;

    struct ListNode n1,n2,n3;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n1.next = &n2;
    n2.next = &n3;
    n3.next =  NULL;

    struct ListNode *p = swapPairs(&n1);
    while (p)
    {
        printf("%d ",p->val);
        p = p->next;
    }
    return 0;
}
// 1 2 3 4 5 6
// 2 1 4 3 6 5