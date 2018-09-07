#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

Node newNode(int val) {

    Node n = malloc(sizeof(struct _node));
    assert(n != NULL);
    n->next = NULL;
    n->val = val;
    return n;

}

List append(List l, int val) {

    Node n = newNode(val);

    if (l == NULL) {
        l = n;
    } else {
        Node curr = l;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = n;
    }

    return l;

}

void printlist(List l) {
    if (l == NULL) {
        printf("X\n");
    } else {
        printf("%d->", l->val);
        printlist(l->next);
    }
}
