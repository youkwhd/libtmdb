CC = gcc
CFLAGS = -std=c99 -pedantic-errors -Wall -Wextra

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o, $(SRC))
DEPS = $(wildcard *.h)

all: libtmdb

libtmdb: $(OBJ)
	$(CC) $(CFLAGS) -lcurl -shared $^ -o libtmdb.so

install: all
	mkdir -p /usr/include/tmdb
	cp *.h  /usr/include/tmdb
	cp libtmdb.so /usr/lib
	cp libtmdb.so /lib

uninstall:
	$(RM) -r /usr/include/tmdb
	$(RM) /usr/lib/libtmdb.so
	$(RM) /lib/libtmdb.so

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

clean:
	$(RM) $(OBJ) libtmdb.so

.PHONY: clean all tmdb install uninstall
