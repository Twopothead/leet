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
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* prehead = (struct ListNode*)malloc(sizeof(struct ListNode)),*pre,*p,*t,*r;
    prehead->next = head;
    pre = prehead;
    p = head;
    while (p)
    {
        if(p->val==val){
            pre->next = p->next;
            t = p;
            p = p->next;
            //free(t);
        }else
        {
            pre = pre->next;
            p = p->next;          
        }
    }
    r = prehead->next; 
    t = prehead;
    free(t);
    return r;
}

int main(){
    struct ListNode n1,n2,n3,n4,n5,n6,n7;
    n1.val = 1;
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
    struct ListNode* p =removeElements(&n1,6);
    while (p)
    {
        printf("%d ",p->val);
        p=p->next;
    }
    
    return 0;
}