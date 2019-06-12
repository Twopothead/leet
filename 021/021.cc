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

}
// Input: 1->2->4, 1->3->4
// Output: 1->1->2->3->4->4

int main(){
    ListNode l1,l1_02,l1_03;
    ListNode l2,l2_02,l2_03;
    l1.val=1,l1_02.val=2,l1_03.val=4;
    l1.next=l1_02,l1_02.next=l1_03,l1_03.next=NULL;
    l2.val=1,l2_02.val=3,l2_03.val=4;
    l2.next=l2_02,l2_02.next=l2_03,l2_03.next=NULL;
    mergeTwoLists(l1,l2);

    return 0;
}