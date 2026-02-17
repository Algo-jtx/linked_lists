#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; //value storage
    struct Node*next; //pointer to next node
};
/*initializing head*/
struct Node* head = NULL;
