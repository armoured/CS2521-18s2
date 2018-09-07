#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph.h"

int indexOf(Graph g, Vertex v, Vertex w) {
    assert (v != w); //no self edges
    //swap vertices so smallest is considered first
    if (v > w) {
        Vertex tmp = v;
        v = w;
        v = tmp;
    }

    int section = 0;
    int i = 0;
    int j = g->nV-2;
    while (i < v) {
        section += j;
        j--;
        i++;
    }

    section += w - 1;

    return section;

}

int hasEdge(Graph g, int index) {

    if (index < 0 || index >= g->size) return -1;

    return g->edges[index];
}

int validG(Graph g)
	{ return (g != NULL && g->nV > 0 && g->nE >= 0); }
int validV(Graph g, Vertex v)
	{ return (validG(g) && 0 <= v &&v < g->nE); }
int validE(Graph g, Edge e)
	{ return (validG(g) && validV(g, e.v) && validV(g, e.w)); }
