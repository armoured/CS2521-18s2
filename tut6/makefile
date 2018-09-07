CC=gcc
CFLAGS=-Wall -Werror -O
DEPS = recursion.h list.h
OBJ = recursion.o testRecursion.o list.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

rec: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o rec 
