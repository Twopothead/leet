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
    struct ListNode *top = head,*old=top;
    top = top->next;
    // free(old);
    
    // struct ListNode *p=(struct ListNode *)malloc(sizeof(struct ListNode));
    // p->next = head;
    // struct ListNode *pre = p,*r =p;
    // struct ListNode *old;
    // // struct ListNode *pre = head;//*curr = head->next;

    // // while (p)
    // {
    //    old = p;
    //     p = p->next;
    //     free(old);

        // // t->next = NULL;
        // printf("[%d]",t->val);
        // free(t);
      
        // if(p->val == val){
        //     struct ListNode *t = p;
        //     pre->next = p->next;
        //     p = p->next;
        //     t->next = NULL;
        //     printf("[%d]",t->val);
        //     free(t);
        // // }else{
        // //                 printf("%d",p->val);
        // //     p = p->next;

        // // }
        // // if(pre->next)
    //     //     pre = pre->next;
    // }
    // t = r;
    // r = r->next;
    // free(t);
    // return r;
    return NULL;
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
    //struct ListNode* p = ;
    removeElements(&n1,6);
    // while (p)
    // {
    //     printf("%d ",p->val);
    //     p=p->next;
    // }
    
    return 0;
}