#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#ifndef GRAPH_H
#define GRAPH_H

// Graph.h definitions
 
// vertices denoted by integers 0..N-1 
typedef struct graphRep * Graph;
typedef int Vertex; 
typedef struct edge Edge;
 
// edges are pairs of vertices (end-points) 
struct edge { Vertex v; Vertex w; };
 
///// Adjacency list graph representation
 
struct graphRep { 
    int nV;       // #vertices 
    int nE;       // #edges
    List *edges;  // array of Vertex lists 
};
 
// validity checking
 
int validG(Graph g);
int validV(Graph g, Vertex v);
int validE(Graph g, Edge e);

Edge *getEdges(Graph g, int *nE);
void printEdges(Edge *e, int nE);

#endif
