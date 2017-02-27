#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "printout.h"
#include "valueTree.h"


Node *makeNode( double x, double y, int level ) {
  int i;
  // allocate the data structure
  Node *node = (Node *)malloc(sizeof(Node));
  // set the node data
  node->level = level;
  node->xy[0] = x; node->xy[1] = y;
  // set children to NULL
  for( i=0; i<4; ++i ) node->child[i] = NULL;
  return node;
}



void makeChildren( Node *parent) {

  int limitOfMemory = 8; // Limit of 8 as this level consumes 5.6mb; where level 9 consumes 22.3mb.
  if (parent->level == limitOfMemory)
  {
    return;
  }

  // parent data
  double x = parent->xy[0]; double y = parent->xy[1]; int level = parent->level;
  // child edge length
  double hChild = pow(2.0,-(level+1));
  // create children at level+1
  parent->child[0] = makeNode( x,y, level+1 );
  parent->child[1] = makeNode( x+hChild,y, level+1 );
  parent->child[2] = makeNode( x+hChild,y+hChild, level+1 );
  parent->child[3] = makeNode( x,y+hChild, level+1 );
  return;
}



// recursively search for leaf nodes void writeNode( FILE *fp, Node *node )
void writeNode(FILE *fp, Node *node) {
  int i;
  if(node->child[0] == NULL)
  {
  printOut( fp, node );
  }
  else {
    for ( i=0; i<4; ++i )
    {
      writeNode(fp, node->child[i]);
    }
  }
  return;
}

void growTree(Node *node) {
  int i;
  if( node->child[0] == NULL )
  {
  makeChildren( node );
  //printf("test");
  }

  else {
    for ( i=0; i<4; ++i )
    {
      growTree(node->child[i]);
    }
  }
  return;
}

void destroyNode(Node *node){
  int i;
  if(node->child[0] == NULL)
  free(node);
  else
  {
  for (i=0; i<4; ++i){
    destroyNode(node->child[i]);
  }
  }
  return;
}

void check(Node *node){
  int i;
  int count = -1; // Automatically set as 0 so needed to be lower.
  while (count != 0){
    count = 0;
    if(node->child[0] == NULL){
      if(indicator(node, 0.5, 0) == false){

        makeChildren(node); // Adding children if false.
        count++;
      }
    }
    else{
      for(i=0; i<4; ++i){
        check(node->child[i]);
      }
    }
  }
  return;
}


// open a file and prepare to write
void writeTree( Node *head ) {
  FILE *fp = fopen("quad.out","w");
  writeNode(fp,head);
  fclose(fp);
  return;
}
