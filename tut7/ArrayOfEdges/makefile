CC=gcc
CFLAGS=-Wall -Werror -O
DEPS = graph.h
OBJ = graph.o testGraph.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

graph: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o graph
