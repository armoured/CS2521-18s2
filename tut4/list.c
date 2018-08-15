#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

Link newNode(int val) {
    Link n = malloc(sizeof(struct ListNode));
    assert(n != NULL);
    n->next = NULL;
    n->value = val;
    return n;
}

void drop(List L) {
    if (L != NULL) {
        drop(L->next);
        free(L);
    }
}

void printlist(List L) {
    if (L == NULL) {
        printf("X\n");
    } else {
        printf("%d->", L->value);
        printlist(L->next);
    }
}

List copy(List L) {
    if (L == NULL) {
        return NULL;
    } else {
        Link n = newNode(L->value);
        n->next = copy(L->next);
        return n;
    }
}

void map(List L, int (*f)(int)) {
    if (L != NULL) {
        L->value = (*f)(L->value);
        map(L->next, f);   
    }
}

int fold(List L, int (*f)(int,int), int z) {
    if (L == NULL) {
        return z;
    } else {
        return f(L->value, fold(L->next,f,z));
    }
}

int length(List L) {
    return (L == NULL) ? 0 : 1 + length(L->next);
}

/*int fib(int n) {
    assert(n > 0);
    if (n == 1) return 1;
    if (n == 2) return 1;
    return (fib(n-1) + fib(n-2));
}*/

int fib(int n) {
    assert(n > 0);
    int *cache = malloc(sizeof(int)*(n+1));
    assert(cache != NULL);
    int i;
    for (i = 0; i < n+1; i++) {
        cache[i] = 0;
    }
    cache[1] = 1;
    cache[2] = 1;
    int r = fibR(n, cache);
    free(cache);
    return r;
}

int fibR(int n, int *cache) {

    if (n == 1) return 1;
    if (n == 2) return 1;
    
    if (cache[n-1] == 0) {
        cache[n-1] = fibR(n-1, cache);
    }

    if (cache[n-2] == 0) {
        cache[n-2] = fibR(n-2, cache);
    }

    return cache[n-1] + cache[n-2];

}

List append(List L, int val) {
    if (L == NULL) {
        return newNode(val);
    } else if (L->next == NULL) {
        L->next = newNode(val);
        return L;
    } else {
        L->next = append(L->next, val);
        return L;
    }
}
