#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph.h"

int main(int argc, char *argv[]) {


    int nE = 6;
    int nV = 6;
    Edge edges[6] = {
        {0, 1}, // 0->1
        {0, 2}, // 0->2
        {1, 3}, // 1->3
        {2, 3}, // 2->3
        {2, 4}, // 2->4
        {4, 5}  // 4->5
    };

    Graph g = malloc(sizeof(struct graphRep));
    g->nV = nV;
    g->nE = nE;
    g->edges = edges;


    assert(validG(g)); 
 
    int numEdges;
    Edge *e = getEdges(g, &numEdges);   

    printEdges(e, numEdges);
    
    


    return EXIT_SUCCESS;
}
