#include <stdlib.h>
#include "makeNode.h"

int main( int argc, char **argv ) {
    // create the head node: level 0
    Node *head = makeNode( 0.0,0.0, 0 );

    // split to level 1
    // makeChildren( head );
    // // split one node to level 2
    // makeChildren( head->child[2] );
    // int size = sizeof(Node);

    growTree(head);

    check(head);
    // printf("%d", size);
    //
    // growTree(head);
    // growTree(head);

    writeTree(head);
    destroyNode(head);


}
