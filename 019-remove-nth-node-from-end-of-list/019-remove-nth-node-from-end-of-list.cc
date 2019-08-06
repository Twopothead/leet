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
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* p =head;
    int count = 0;
    while (p)
    {
        count ++;
        p = p->next;        
    }
    count = count-n;
    struct ListNode* pre =(struct ListNode*)malloc(sizeof(struct ListNode));
    pre->val = -1;
    pre->next = head;
    struct ListNode* H = pre;
    while (pre&&count)
    {
        count--;
        pre = pre->next;
    }
    p = pre->next;
    // pre->next = p->next;
    // p->next = NULL;
    // free(p);
    pre->next = p->next;
    struct ListNode* t = H->next;
    free(H);
    return t;
}
int main(){
    struct ListNode n1,n2,n3,n4,n5;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n4.val = 4;
    n5.val = 5;
    struct ListNode *l = removeNthFromEnd(&n1,1);
    while (l)
    {
        printf("%d ",l->val);
        l = l->next;
    }
    
    return 0;
}
