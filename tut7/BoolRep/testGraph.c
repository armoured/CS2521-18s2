#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph.h"

int main(int argc, char *argv[]) {


    int nE = 6;
    int nV = 6;

    //edges at:
    /*
        (0,1) = 0
        (0,2) = 1
        (1,3) = 6
        (2,3) = 9
        (2,4) = 10
        (4,5) = 14
    */

    bool edges[] = {
        1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1
    };

    Graph g = malloc(sizeof(struct graphRep));
    g->nV = nV;
    g->nE = nE;
    g->edges = edges;
    g->size = 15;

    assert(validG(g)); 
    
    int i = indexOf(g, 0, 1);
    printf("Index of (%d,%d) is %d, hasEdge: %d\n", 0, 1, i, hasEdge(g, i)); 
    i = indexOf(g, 0, 2);
    printf("Index of (%d,%d) is %d, hasEdge: %d\n", 0, 2, i, hasEdge(g, i));
    i = indexOf(g, 1, 3);
    printf("Index of (%d,%d) is %d, hasEdge: %d\n", 1, 3, i, hasEdge(g, i));
    i = indexOf(g, 2, 3);
    printf("Index of (%d,%d) is %d, hasEdge: %d\n", 2, 3, i, hasEdge(g, i));
    i = indexOf(g, 2, 4);
    printf("Index of (%d,%d) is %d, hasEdge: %d\n", 2, 4, i, hasEdge(g, i)); 
    i = indexOf(g, 4, 5);
    printf("Index of (%d,%d) is %d, hasEdge: %d\n", 4, 5, i, hasEdge(g, i));

    //this one should be 0
    i = indexOf(g, 0, 3);
    printf("Index of (%d,%d) is %d, hasEdge: %d\n", 0, 3, i, hasEdge(g, i));
    return EXIT_SUCCESS;
}
