CC=gcc
CFLAGS=-g -std=c99
#Compiler flags:
# -g -- Enable debugging
quadTree: main.c makeNode.c makeNode.h printout.c printout.h Node.h valueTree.c valueTree.h
	$(CC) $(CFLAGS) -o quadTree main.c makeNode.c printout.c valueTree.c -lm

clean:
	rm -f quadTree
