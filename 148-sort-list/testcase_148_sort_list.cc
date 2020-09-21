/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
struct ListNode {
     int val;
     struct ListNode *next;
};
struct ListNode* sortList(struct ListNode* head){
    struct ListNode* p = head;
    struct ListNode* q = head;
    int t;
    while (p != nullptr)
    {
        q = head;
        while (q != p)
        {
            if(q->val > p->val){
                t = q->val;
                q->val = p->val;
                p->val = t;
            }
            q = q->next;
        }
        p = p->next;
    }
    return head;
}
struct ListNode* TestsortList(struct ListNode* head){
    ListNode* p= head;
    ListNode* q= head;
    int t;
    printf("hello\n");
    while (p!=nullptr)
    {
        printf("%d ",p->val);
        q=head;
        while (q!=p)
        {
            if(q->val>p->val){
                t = q->val;
                q->val=p->val;
                p->val=t;
            }
            q=q->next;
        }
        p=p->next;
    }
}

int main(){
    // [4,2,1,3]
    struct ListNode n1,n2,n3,n4,n5,n6,n7;
    n1.val = 4;
    n2.val = 2;
    n3.val = 6;
    n4.val = 3;
    n5.val = 4;
    n6.val = 5;
    n7.val = 6;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = NULL;
    
    struct ListNode *p=&n1;
    while (p)
    {
        printf("%d ",p->val);
        p=p->next;
    }
    sortList(&n1);
    printf("\nfuck\n");
    p=&n1;
    while (p)
    {
        printf("%d ",p->val);
        p=p->next;
    }
    return 0;
}