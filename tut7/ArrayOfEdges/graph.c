#include <stdio.h>
#include <stdlib.h>
#include "graph.h"


Edge *getEdges(Graph g, int *nE) {
    *nE = g->nE;
    return g->edges;
}

int validG(Graph g)
	{ return (g != NULL && g->nV > 0 && g->nE >= 0); }
int validV(Graph g, Vertex v)
	{ return (validG(g) && 0 <= v &&v < g->nE); }
int validE(Graph g, Edge e)
	{ return (validG(g) && validV(g, e.v) && validV(g, e.w)); }

void printEdges(Edge *e, int nE) {
    int i;
    for (i = 0; i < nE; i++) {
        printf("(%d, %d)\n", e[i].v, e[i].w);
    }
}
