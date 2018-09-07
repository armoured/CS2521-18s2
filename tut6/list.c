#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

Node newNode(int val) {
    Node n = malloc(sizeof(struct _node));
    assert(n != NULL);
    n->val = val;
    n->next = NULL;
    return n;
}



Node append(Node l, int val) {

    

    if (l == NULL) {
        l = newNode(val);
    } else if (l->next == NULL) {
        l->next = newNode(val);
    } else {

        l->next = append(l->next, val);
    }
    return l;
}

void printlist(Node l) {

    if (l == NULL) {
        printf("X\n");
    } else {
        printf("%d->", l->val);
        printlist(l->next);
    }


}
