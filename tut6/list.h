#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_H
#define LIST_H

typedef struct _node *Node;


struct _node {

    int val;
    Node next;

};

Node newNode(int val);
Node append(Node l, int val);
void printlist(Node l);

#endif
