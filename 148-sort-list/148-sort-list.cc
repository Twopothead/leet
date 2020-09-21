/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* sortList(struct ListNode* head){
    struct ListNode* p = head;
    struct ListNode* q = head;
    int t;
    while (p != NULL)
    {
        q = head;
        while (q != p)
        {
            if(q->val > p->val){
                t = q->val;
                q->val = p->val;
                p->val = t;
            }
            q = q->next;
        }
        p = p->next;
    }
    return head;
}