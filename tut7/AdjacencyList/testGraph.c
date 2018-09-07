#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph.h"

int main(int argc, char *argv[]) {


    int nE = 6;
    int nV = 6;
    List edges[6];
    int i;
    for (i = 0; i < 6; i++) {
        edges[i] = NULL;
    }

    //create adj list:
    /*
    [0]->1->2
    [1]->0->3
    [2]->0->3->4
    [3]->1->2
    [4]->2->5
    [5]->4
    */

    List list0 = newNode(1);
    append(list0, 2);
    List list1 = newNode(0);
    append(list1, 3);
    List list2 = newNode(0);
    append(list2, 3);
    append(list2, 4);
    List list3 = newNode(1);
    append(list3, 2);
    List list4 = newNode(2);
    append(list4, 5);
    List list5 = newNode(4);
    
    edges[0] = list0;
    edges[1] = list1;
    edges[2] = list2;
    edges[3] = list3;
    edges[4] = list4;
    edges[5] = list5;
    

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
