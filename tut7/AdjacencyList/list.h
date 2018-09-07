#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_H
#define LIST_H

typedef struct _node *Node;
typedef struct _node *List;

struct _node {
 
    int val;
    Node next;  

};

Node newNode(int val);
List append(List l, int val);
void printlist(List l);

#endif
