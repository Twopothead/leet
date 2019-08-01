#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* p =head;
    int count = 0;
    while (p)
    {
        count ++;
        p = p->next;        
    }
    count = count/2;
    p = head;
    while (p&&count)
    {
        count--;
        p = p->next;
    }
    return p;
}

int main(){
    return 0;
}