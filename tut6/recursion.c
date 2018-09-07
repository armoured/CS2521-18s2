#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"
#include "recursion.h"

Node mergesorted(Node l1, Node l2) {

    if (l1 == NULL) {
        return l2;
    } else if (l2 == NULL) {
        return l1;
    }

    if (l1->val < l2->val) {
        l1->next = mergesorted(l1->next, l2);
        return l1;
    } else {
        l2->next = mergesorted(l1, l2->next);
        return l2;
    }

}

int fib(int n) {

    assert(n > 0);

    if (n == 1) return 1;
    if (n == 2) return 1;

    return fib(n-1) + fib(n-2);
}


static int fibR(int n, int *cache) {

    if (n == 1) return 1; //returns 1
    if (n == 2) return 1; //returns 1

    if (cache[n-1] == 0) {
        cache[n-1] = fibR(n-1, cache);
    }

    if (cache[n-2] == 0) {
        cache[n-2] = fibR(n-2, cache);
    }

    return cache[n-1] + cache[n-2];


}

int fib2(int n) {

    assert(n > 0);

    int *cache = malloc(sizeof(int)*(n+1));
    int i;
    for (i = 0; i < n + 1; i++) {
        cache[i] = 0;
    }
    cache[1] = 1;
    cache[2] = 1;
    
    int ret = fibR(n, cache);
    return ret;
   

}

Node head;

static void reverseRec(Node l) {
    if (l == NULL) {
        head = NULL;
        return;

    }

    if (l->next == NULL) {
        head = l;
        return;
    }

    if (l->next->next == NULL) {
        head = l->next;
    }
    reverseRec(l->next);
    l->next->next = l;
    return;   
}

Node reverse(Node l) {
   
    reverseRec(l);
    l->next = NULL;
    return head; 

}
