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
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p1 = head,*p2 = head;
    int count = 0,c=0;
    for(p1= head,c=0;p1!=NULL;p1 = p1->next,c++)
    {
        p2 = head;
        count = 0;
        while (p2 && (count++)<c)
        {
            if(p2 == p1)
                return p2;
            p2=p2->next;
        }
    }
    return NULL;
}
int main(){
    return 0;
}