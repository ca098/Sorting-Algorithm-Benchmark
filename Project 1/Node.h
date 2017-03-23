#include <stdio.h>

// data structure definition
struct node {
  // node data
  int level;
  double xy[2];
  struct node *child[4];
  struct node *nextLeaf;
};
// data type definition
typedef struct node Node;
