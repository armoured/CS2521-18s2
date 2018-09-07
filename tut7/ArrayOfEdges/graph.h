// Graph.h definitions
 
// vertices denoted by integers 0..N-1 
typedef struct graphRep * Graph;
typedef int Vertex; 
typedef struct edge Edge;
 
// edges are pairs of vertices (end-points) 
struct edge { Vertex v; Vertex w; };
 
///// Array of edges representation
 
struct graphRep { 
    int nV;       // #vertices 
    int nE;       // #edges 
    Edge *edges;  // array of Edges
}; 
 
// validity checking
 
int validG(Graph g);
int validV(Graph g, Vertex v);
int validE(Graph g, Edge e);

Edge *getEdges(Graph g, int *nE);
void printEdges(Edge *e, int nE);
