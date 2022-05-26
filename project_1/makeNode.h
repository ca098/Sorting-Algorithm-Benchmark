#include "Node.h"

Node *makeNode( double x, double y, int level );

void makeChildren( Node *parent);

void growTree(Node *node);

void destroyNode(Node *node);

void check(Node *node);

void writeTree( Node *head);

void writeNode(FILE *fp, Node *node);
