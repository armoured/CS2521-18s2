CC=gcc
CFLAGS=-Wall -Werror -O
DEPS = graph.h list.h
OBJ = list.o graph.o testGraph.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

graph: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o graph
