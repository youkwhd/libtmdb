CC = gcc
CFLAGS = -Wall

SRC = main.c c-tmdb.c
OBJ = main.o c-tmdb.o
DEPS = c-tmdb.h

all: c-tmdb

c-tmdb: $(OBJ)
	$(CC) $(CFLAGS) $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf a.out *.o
