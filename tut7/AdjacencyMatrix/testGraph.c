#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph.h"

int main(int argc, char *argv[]) {


    int nE = 6;
    int nV = 6;
    int *edges[] = {
        (int[]) {0, 1, 1, 0, 0, 0},
        (int[]) {1, 0, 0, 1, 0, 0},
        (int[]) {1, 0, 0, 1, 1, 0},
        (int[]) {0, 1, 1, 0, 0, 0},
        (int[]) {0, 0, 1, 0, 0, 1},
        (int[]) {0, 0, 0, 0, 1, 0},
    };

    Graph g = malloc(sizeof(struct graphRep));
    g->nV = nV;
    g->nE = nE;
    g->edges = edges;

    assert(validG(g)); 
    int numEdges;
    Edge *e = getEdges(g, &numEdges);
    printEdges(e, nE);
    
    


    return EXIT_SUCCESS;
}
