#include <stdio.h>
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

struct ListNode* oddEvenList(struct ListNode* head){
    struct ListNode *p1 = head,*p2 = head->next,*p = NULL;
    struct ListNode *h1 = (struct ListNode*)malloc(sizeof(struct ListNode)),*h2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *t1 = h1,*t2 = h2;
    while (p1 && p2 && p1->next)
    {       
        t1->next = p1;
        t2->next = p2;
        p1 = p2->next;
        
        p2 = p1->next;
            printf("%d-",p1->val);
        
                        if(p2)printf(" %d*",p2->val);

        t1 = t1->next;
        t2 = t2->next;
    }
    if(p1){
        p1->next = NULL;
        t1->next = p1;
        // t1 = t1->next;
    }

    while (h1){
        printf("%d ",h1->val);
        h1 = h1->next;
    }

    while (h2){
        printf("%d ",h2->val);
        h2 = h2->next;
    }


//     printf(" [%d]",t2->val);
//     t1->next = h2->next;
//     free(h2);
//     p = h1->next;
//     free(h1);
//     while (p)
//     {
//         printf("%d ",p->val);
//         p = p->next;
//     }
    
    return p;
}
int main(){
    struct ListNode n1,n2,n3,n4,n5;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n4.val = 4;
    n5.val = 5;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    oddEvenList(&n1);
    return 0;
}