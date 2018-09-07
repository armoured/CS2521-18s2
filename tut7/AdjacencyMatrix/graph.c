#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

Edge *getEdges(Graph g, int *nE) {
    Edge *e = malloc(sizeof(struct edge)*g->nE);
    int i, j, edgeCount = 0;
    for (i = 0; i < g->nV; i++) {
        for (j = i+1; j < g->nV; j++) {
            if (g->edges[i][j]) {
                e[edgeCount].v = i;
                e[edgeCount].w = j;
                edgeCount++;
            }
        }
    }
    *nE = edgeCount;
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
