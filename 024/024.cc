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
void swap(struct ListNode* t1,struct ListNode* t2){
    t1->next = t2->next;
    t2->next = t1;
}
struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *p1,*p2;
    

｝
// struct ListNode* swapPairs(struct ListNode* head){
//     struct ListNode *p1,*p2,*p,*pre = NULL;
//     struct ListNode *t1,*t2,*r;
//     p1 = head;
//     p2 = head->next;
//     r = head->next;
//     bool flag = false;
//     struct ListNode*pp;
//     while (p1 && p2)
//     {
//         pp = r;
//         t1 = p1,t2 = p2;
//         swap(t1,t2);
//         p = p1;
//         p1 = p2;
//         p2 = p;
//         // pre = p2;
//         printf("%d %d -",p1->val,p2->val);
//         // if(!flag){
//         //     r = p1;
//         //     flag = true;
//         // }
//         p1 = p2->next;
//         if(p1)
//             p2 = p1->next;
//         // pre->next =p2;
//         // pre = p1;
//         // p2 = p1->next;
//         // if(p2)
//         //     p1 = p2->next;
//                 if(p1&&p2)printf("%d%d\t",p1->val,p2->val);
//                 pre = p1;
// printf("pre %d\n",pre->val);
//              while (pp)
//         {
//         printf(" [%d]",pp->val);
//         pp = pp->next;
//         }

//     }

//     return r;
// }
int main(){
    struct ListNode n1,n2,n3,n4,n5,n6,n7,n8;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next = NULL;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n4.val = 4;
    n5.val = 5;
    n6.val = 6;
    n7.val = 7;
    n8.val = 8;
    ListNode *p =swapPairs(&n1);
    // while (p)
    // {
    //     printf("%d ",p->val);
    //     p = p->next;
    // }
    
    

    return 0;
}
