
# code details

EXE_DIR = .
EXE = $(EXE_DIR)/compiled

SRC= Main.c bubbleSort.c quickSort.c insertionSort.c swap.c

# generic build details

CC=      cc
COPT=    -O
CFLAGS=  -lm

# compile to  object code

OBJ= $(SRC:.c=.o)

.c.o:
	$(CC) $(COPT) -c -o $@ $<

# build executable

$(EXE): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXE)

# clean up compilation

clean:
	rm -f $(OBJ) $(EXE)

# dependencies
Main.o:  Main.c arrays.h algorithms.h
insertionSort.o:  insertionSort.c quickSort.c bubbleSort.c algorithms.h arrays.h
swap.o: swap.c arrays.h
