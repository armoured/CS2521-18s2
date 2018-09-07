#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "recursion.h"

int main(int argc, char *argv[]) {

    printf("Hi\n");    

    Node l1 = NULL;
    l1 = append(l1, 1);
    append(l1, 3);
    append(l1, 5);
    append(l1, 7);
    printlist(l1);
   
    Node l2 = NULL;
    l2 = append(l2, 2);
    append(l2, 4);
    append(l2, 6);
    append(l2, 8);
    printlist(l2);

    Node l3 = NULL;

    l3 = mergesorted(l1, l2);
    printlist(l3);

    printf("fib(5) = %d\n", fib(5));
    printf("fib(60) = %d\n", fib2(60));
    
    l3 = reverse(l3);
    printlist(l3);

    return EXIT_SUCCESS;
}
