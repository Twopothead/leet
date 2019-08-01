#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
struct ListNode{
    int val;
    struct ListNode *next;
};
bool isPalindrome(struct ListNode* head){
    struct ListNode *p = head,*p2,*l1,*l2;
    struct ListNode *r = (struct ListNode *)malloc(sizeof(struct ListNode));
    r->next = NULL;
    struct ListNode* t =head;
    int count = 0;
    bool odd = false;
    while (t)
    {
        count ++;
        t = t->next;        
    }
    if(count%2!=0)
        odd = true;
    count = (count%2==0)?count/2:count/2+1;
    while (p&&count--)
    {
        p2 = p->next;
        p->next = r->next;
        r->next = p;
        p = p2;
    }
    l2 = p;
    p = r->next;
    r->next = NULL;
    free(r);
    l1 = p;
    if(odd)
        l1 = l1->next;
    while (l1&&l2)
    {
        if(l1->val!=l2->val)
            return false;
        l1 = l1->next;
        l2 = l2->next;
    }
    return true;
}

int main(){
    // struct ListNode n1,n2,n3,n4,n5;
    // n1.val = 1;
    // n2.val = 2;
    // n3.val = 3;
    // n4.val = 2;
    // n5.val = 1;
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // n5.next = NULL;

    struct ListNode n1,n2,n3,n4,n5,n6;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n4.val = 3;
    n5.val = 2;
    n6.val = 1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = NULL;
    isPalindrome(&n1);
    return 0;    
}