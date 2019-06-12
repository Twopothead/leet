#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode * Position; 
struct ListNode
{
    int val;
    Position next;    
};
void deleteNode(struct ListNode* node) {
    Position P = node,tmpCell;
    int tmp;
    if(P->next->next != NULL){
        tmp = P->next->val;
        P->val = tmp;
        tmpCell = P->next;
        P->next = P->next->next;
        free(tmpCell);
    }else{
        P->val = P->next->val;
        tmpCell = P->next;
        P->next = NULL;
        free(tmpCell);
    }
}
void testcase1(){
    Position L1 = (Position)malloc(sizeof(ListNode));L1->val = 4;
    Position L2 = (Position)malloc(sizeof(ListNode));L2->val = 5;
    Position L3 = (Position)malloc(sizeof(ListNode));L3->val = 1;
    Position L4 = (Position)malloc(sizeof(ListNode));L4->val = 9;
    L1->next = L2;
    L2->next = L3;
    L3->next = L4;
    L4->next = NULL;
    Position P =  L1;
    while (P){
        printf("%d ",P->val);
        P = P->next;
    }
    P = L1;
    deleteNode(L2);
    printf("\n");
    while (P){
        printf("%d ",P->val);
        P = P->next;
    }
    printf("\n");
}
void testcase2(){
    Position L1 = (Position)malloc(sizeof(ListNode));L1->val = 4;
    Position L2 = (Position)malloc(sizeof(ListNode));L2->val = 5;
    Position L3 = (Position)malloc(sizeof(ListNode));L3->val = 1;
    Position L4 = (Position)malloc(sizeof(ListNode));L4->val = 9;
    L1->next = L2;
    L2->next = L3;
    L3->next = L4;
    L4->next = NULL;
    Position P =  L1;
    while (P){
        printf("%d ",P->val);
        P = P->next;
    }
    P = L1;
    deleteNode(L3);
    printf("\n");
    while (P){
        printf("%d ",P->val);
        P = P->next;
    }
}
int main(){
    testcase1();
    testcase2();
    return 0;
}