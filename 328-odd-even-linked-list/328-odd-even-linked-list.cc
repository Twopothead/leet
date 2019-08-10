#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
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
struct ListNode* oddEvenList(struct ListNode* head){
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
        }else {           
            p = p->next;
            t->next = head2->next;
            head2->next = t;
        }
        odd = !odd;
    }
    head1->next=reverseList(head1->next);
    p= head1;
    while (p->next)
    {
        p = p->next;
    }
    p->next = reverseList(head2->next);
    p = head1->next;
    free(head1),free(head2);
    return p;
}
int main(){
    struct ListNode n1,n2,n3,n4,n5,n6;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n4.val = 4;
    n5.val = 5;
    n6.val = 6;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = NULL;

    // struct ListNode n1,n2,n3;
    // n1.val = 1;
    // n2.val = 2;
    // n3.val = 3;
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next =  NULL;

    struct ListNode *p = oddEvenList(&n1);
    while (p)
    {
        printf("%d ",p->val);
        p = p->next;
    }
    return 0;
}