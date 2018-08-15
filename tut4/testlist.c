#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

int square(int x);
int mult(int x, int y);

int main(int argc, char *argv[]) {

    List head1 = NULL;
    printf("Printing before init\n");
    printlist(head1);
    printf("Length: %d\n", length(head1));
    int i;
    for (i = 0; i < 5; i++) {
        //creates a list 1->3->5->7->9
        head1 = append(head1, 2*i + 1);
    } 
    printf("Printing after init\n");
    printlist(head1);
    printf("Length: %d\n", length(head1));
    
    printf("Mapping list\n");
    map(head1, square);
    printlist(head1);

    printf("Copying list\n");
    List copy1 = copy(head1);
    printlist(copy1);
    //freeing copy
    drop(copy1);
    

    //freeing list
    drop(head1);

    List head2 = NULL;
    
    printf("Printing before init\n");
    printlist(head2);
    printf("Length: %d\n", length(head2));

    for (i = 2; i < 5; i++) {
        //creates a list 2->3->4
        head2 = append(head2, i);
    } 
    printf("Printing after init\n");
    printlist(head2);
    printf("Length: %d\n", length(head2));

    printf("Folding list\n");
    printf("%d\n", fold(head2, mult, 1));

    //freeing list
    drop(head2);

    printf("fib(5) = %d\n", fib(5));
    printf("fib(70) = %d\n", fib(70));

    return EXIT_SUCCESS;
}

int square(int x) {
    return x*x;
}

int mult(int x, int y) {
    return x*y;
}
