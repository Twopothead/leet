
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
struct ListNode{
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
bool hasCycle(struct ListNode *head) {
    return -1;
}

int main(){
// Input: 1->2->3->4->5->NULL
// Output: 5->4->3->2->1->NULL
    ListNode *l1,*l2,*l3,*l4,*l5;
    l1 = (ListNode *)malloc(sizeof(ListNode));
    l2 = (ListNode *)malloc(sizeof(ListNode));
    l3 = (ListNode *)malloc(sizeof(ListNode));
    l4 = (ListNode *)malloc(sizeof(ListNode));
    l5 = (ListNode *)malloc(sizeof(ListNode));
    l1->val = 1,l1->next = l2;
    l2->val = 2,l2->next = l3;
    l3->val = 3,l3->next = l4;
    l4->val = 4,l4->next = l5;
    l5->val = 5,l5->next = NULL;
    reverseList(l1);
    ListNode *l = l1;
    while (l != NULL)
    {
        printf("%d ",l->val);
        l = l->next;
    }
    
    return 0;
}