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
bool notallnone(struct ListNode** ps, int listsSize){
    for(int i = 0;i<listsSize;i++){
        if(ps[i])
            return true;
    }
    return false;
}
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if(listsSize==0||!notallnone(lists,listsSize))
        return NULL;// testcase: input:[]  input:[[]]
    struct ListNode* pres[listsSize],* ps[listsSize],*head=(struct ListNode*)malloc(sizeof(struct ListNode)),*p=head,*pmin;
    for (int i = 0; i < listsSize; i++)
    {
        pres[i] = (struct ListNode*)malloc(sizeof(struct ListNode));
        pres[i]->next = &lists[i][0];
        ps[i] = &lists[i][0];
    }
    bool first = true;
    int min_i = -1;
    while (notallnone(ps,listsSize))    
    {
        first = true;
        min_i = -1;
        for (int i = 0; i < listsSize; i++)
        {
            if(ps[i] && first){
                pmin = ps[i];
                min_i = i;
                first = false;
            }
            if(ps[i]){
                if(ps[i]->val<pmin->val){
                    pmin = ps[i];
                    min_i = i;
                }
            }   
        }
        if(ps[min_i]&&ps[min_i]->next){
                pres[min_i]->next = ps[min_i]->next;
                ps[min_i] = ps[min_i]->next;
                if(pmin){
                    pmin->next = NULL;
                    p->next = pmin;
                    p = p->next;
                }
        }else
        {
            pres[min_i]->next = NULL;
            ps[min_i] = NULL;
            p->next = pmin;
            p = p->next;
        }
    }
    for (int i = 0; i < listsSize; i++)
        lists[i] = pres[i]->next;
    struct ListNode* r = head->next;
    free(head);
    for (int i = 0; i < listsSize; i++)
        free(pres[i]);
    return r;
}

int main(){
    struct ListNode n11,n12,n13,n21,n22,n23,n31,n32;
    n11.next = &n12;
    n12.next = &n13;
    n13.next = NULL;
    n21.next = &n22;
    n22.next = &n23;
    n23.next = NULL;
    n31.next = &n32;
    n32.next = NULL;
    n11.val = 1;
    n12.val = 4;
    n13.val = 5;
    n21.val = 1;
    n22.val = 3;
    n23.val = 4;
    n31.val = 2;
    n32.val = 6;
    struct ListNode **lists;
    lists = (struct ListNode **)malloc(sizeof(struct ListNode *));
    lists[0] = &n11;
    lists[1] = &n21;
    lists[2] = &n31;
    struct ListNode *l = mergeKLists(lists,3);
    while (l)
    {
        printf("%d ",l->val);
        l = l->next;
    }
    return 0;
}