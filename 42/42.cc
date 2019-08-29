#include <stdlib.h>
#include <stdio.h>
struct node
{
    int val;
    struct node *next;
};
typedef struct node Node;
typedef struct node* Nodeptr;
typedef struct stackType{
    Nodeptr top;
}StackType,*Stack;
Stack initStack(){
    Stack sp = (Stack) malloc(sizeof(StackType));
    sp->top = NULL;
    return sp;
}
int empty(Stack S){
    return (S->top==NULL);
}
void push(Stack S,int n){
    Nodeptr np = (Nodeptr) malloc(sizeof(Node));
    np->val = n;
    np->next = S->top;
    S->top = np;
} 
int pop(Stack S){
    if(empty(S)) return -1;
    int hold = S->top->val;
    Nodeptr temp = S->top;
    S->top = S->top->next;
    free(temp);
}
int trap(int* height, int heightSize){
    Stack W;
    int unfucked = true;
    int capacity = 0;
    for(int i = 0;i<heightSize;i++){

        if(unfucked && height[i]!=0){
            push(S,height[i]);
            unfucked = false;
        }
        if(!unfucked){

        }
        printf("%d ",height[i]);
    }

}
int main(){
    int height[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    trap(height,12);
    return 0;
}