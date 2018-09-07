// Graph.h definitions
 
// vertices denoted by integers 0..N-1 
typedef struct graphRep * Graph;
typedef int Vertex; 
typedef struct edge Edge;

typedef unsigned char bool;
 
// edges are pairs of vertices (end-points) 
struct edge { Vertex v; Vertex w; };
 
///// Adjacency matrix graph representation
 
struct graphRep { 
    int nV;       // #vertices 
    int nE;       // #edges 
    int size;     //size of edges array
    bool *edges;  // matrix of booleans (0 or 1)
}; 
 
// validity checking
 
int validG(Graph g);
int validV(Graph g, Vertex v);
int validE(Graph g, Edge e);

int indexOf(Graph g, Vertex v, Vertex w);
int hasEdge(Graph g, int index);
