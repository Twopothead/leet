

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}Node,*NodePtr;

typedef struct {
    NodePtr top;
    struct node *next;
    int zmin,zminztimes;
} MinStack;

/** initialize your data structure here. */
typedef MinStack* Stack; 
MinStack* minStackCreate() {
    Stack ms = (Stack)malloc(sizeof(MinStack));
    ms->next = NULL;
    ms->top = NULL;
    ms->zmin = -1,ms->zminztimes = 0;
    return ms;
}

void minStackPush(MinStack* obj, int x) {
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    np->num = x;
    np->next = obj->top;
    obj->top = np;
    if(obj->zminztimes==0){
        obj->zmin = x;
    }else if(x==obj->zmin){
        obj->zminztimes++;
    }else if (x<obj->zmin){
        obj->zmin = x;
        obj->zminztimes = 1; 
    }
    return;
}
#define RogueValue -9999
bool isEmpty(MinStack* obj){
    return (obj->top)?false:true;
}
int simplePop(MinStack* obj) {
    if(isEmpty(obj)) return;
    int hold = obj->top->num;
    NodePtr temp = obj->top;
    obj->top = obj->top->next;
    free(temp);
    return hold;
}
void minStackPop(MinStack* obj) {
    Stack tmp = minStackCreate();
    while (obj)
    {
        minStackPush(tmp,simplePop(obj));
    }
    while (tmp)
    {
        minStackPush(obj,simplePop(tmp));
    }
    simplePop(obj);
    return;
}

int minStackTop(MinStack* obj) {
    if(obj->top)
        return obj->top->num;
    return RogueValue;
}

int minStackGetMin(MinStack* obj) {
    return (obj->top)?(obj->top->num):obj->zmin;
}

void minStackFree(MinStack* obj) {
    while (!isEmpty(obj))
    {
        minStackPop(obj);
    }
    free(obj);
    return;
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
int main(){
    return 0;
}