#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "list.h"

Edge *getEdges(Graph g, int *nE) {
    Edge *e = malloc(sizeof(struct edge)*g->nE);
    int edgeCount = 0;
    *nE = g->nE;
    int i;
    for (i = 0; i < g->nV; i++) {
        Node curr = g->edges[i];
        while (curr != NULL) {
            
            if (curr->val >= i) {
                e[edgeCount].v = i;
                e[edgeCount].w = curr->val;
                edgeCount++;
            }

            

            curr = curr->next;
        }
    }
    return e;
}

void printEdges(Edge *e, int nE) {
    int i;
    for (i = 0; i < nE; i++) {
        printf("(%d,%d)\n", e[i].v, e[i].w);
    }
}


int validG(Graph g)
	{ return (g != NULL && g->nV > 0 && g->nE >= 0); }
int validV(Graph g, Vertex v)
	{ return (validG(g) && 0 <= v &&v < g->nE); }
int validE(Graph g, Edge e)
	{ return (validG(g) && validV(g, e.v) && validV(g, e.w)); }

