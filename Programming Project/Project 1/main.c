#include <stdlib.h>
#include "makeNode.h"

int main( int argc, char **argv ) {
  // create the head node: level 0
  Node *head = makeNode( 0.0,0.0, 0 );

  // split to level 1
  makeChildren(head); // 1/3
  // // split one node to level 2
  makeChildren(head->child[2]); // 2/3
  int size = sizeof(Node);
  printf("%d\n", size);

  growTree(head); //4/5
  growTree(head); // 5/5


  check(head); // 6/6

  writeTree(head); // 3/3

}
