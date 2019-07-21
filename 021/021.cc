#include <stdlib.h>
#include <stdio.h> 
struct  ListNode{
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


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *pa,*pb;
    pa = l1;
    pb = l2;
    struct ListNode *r = NULL;
    struct ListNode *f = r;
    bool first = true;
    bool equal = false;
    while (pa && pb)
    {
        if(pa && pb){
            struct ListNode *t = (pa->val <= pb->val) ? pa:pb;
            pa = (pa->next) && (pa->val <= pb->val) ? pa->next:pa;
            pb = (pb->next) && (pb->val < pb->val)? pb->next:pb;
            equal = (pa->val == pb->val);
            f = t;
            if(first){
                r = f;
                first = false;
            }
            f = f->next;
            if(equal){
                f ->next = pb;
                pb = pb->next;
            }
            // if(pb)printf(" pb%d ",pb->val);
        }else if(pa){
            f = pa;
            pa = (pa->next) ? pa->next:pa;
            f->next = NULL;
            f = f->next;
        }else if(pb){
            f = pb;
            pb = (pb->next) ? pb->next:pb;
            f->next = NULL;
            f = f->next;
        }
        if(!pa&&!pb)
            break;
    }
    return r;
}
// Input: 1->2->4, 1->3->4
// Output: 1->1->2->3->4->4

int main(){
    ListNode *l1 = (ListNode *)malloc(sizeof(ListNode)),*l2=(ListNode *)malloc(sizeof(ListNode));
    ListNode *l1_2=(ListNode *)malloc(sizeof(ListNode)),*l2_2=(ListNode *)malloc(sizeof(ListNode));
    ListNode *l1_3=(ListNode *)malloc(sizeof(ListNode)),*l2_3=(ListNode *)malloc(sizeof(ListNode));
    l1->next = l1_2;
    l1_2->next = l1_3;
    l2->next = l2_2;
    l2_2->next = l2_3;
    l1->val = 1, l1_2->val = 2,l1_3->val = 4;
    l2->val = 1,l2_2->val = 3,l2_3->val = 4;

    
    ListNode *p = mergeTwoLists(l1,l2);
    // while (p)
    // {
    //     printf("%d ",p->val);
    //     p = p->next;
    // }

    return 0;
}