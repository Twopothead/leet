#include <stdlib.h>
#include <stdio.h>

typedef struct {
    
} LRUCache;


LRUCache* lRUCacheCreate(int capacity) {
    
}

int lRUCacheGet(LRUCache* obj, int key) {
  
}

void lRUCachePut(LRUCache* obj, int key, int value) {
  
}

void lRUCacheFree(LRUCache* obj) {
    
}

/**
 * Your LRUCache struct will be instantiated and called as such:
 * LRUCache* obj = lRUCacheCreate(capacity);
 * int param_1 = lRUCacheGet(obj, key);
 
 * lRUCachePut(obj, key, value);
 
 * lRUCacheFree(obj);
*/
int main(){
   int capacity,int key, int value;
   LRUCache* obj = lRUCacheCreate(capacity);
   int param_1 = lRUCacheGet(obj, key);
 
   lRUCachePut(obj, key, value);
 
   lRUCacheFree(obj);
    return 0;
}