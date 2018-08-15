#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode *Link;
 
typedef struct ListNode {
    int value;
    Link next;
} ListNode;
 
typedef Link List;
 
//#define head(L)  (empty(L) ? -1 : (L)->value)
//#define tail(L)  (empty(L) ? NULL : (L)->next)
//#define empty(L) ((L) == NULL)
 
// display the value contained in a ListNode
//#define show(V) { printf("%d",(V)); }
 
// create a new ListNode containing supplied value
// prints error and exit()s if can't create a ListNode
Link newNode(int val);
void drop(List L);
List copy(List L);
void map(List L, int (*f)(int));
int fold(List L, int (*f)(int,int), int z);
int length(List L);
int fib(int n);
int fibR(int n, int *cache);
void printlist(List L);
List append(List L, int val);
