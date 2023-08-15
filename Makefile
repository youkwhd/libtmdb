CC = gcc
CFLAGS = -std=c99 -pedantic-errors -Wall -Wextra

SRC = $(wildcard *.c tmdb/curl/*.c tmdb/buffer/*.c tmdb/query/*.c tmdb/request/*c)
DEPS = $(wildcard *.h tmdb/curl/*.c tmdb/buffer/*.c tmdb/query/*.c tmdb/request/*c)
OBJ = $(patsubst %.c,%.o, $(SRC))

all: libtmdb

debug:
	@echo $(SRC)
	@echo $(OBJ)
	@echo $(DEPS)

libtmdb: $(OBJ)
	$(CC) $(CFLAGS) -lcurl -shared $^ -o libtmdb.so

# TODO: automate nest folder
install: libtmdb
	mkdir -p /usr/include/tmdb
	cp *.h  /usr/include/tmdb

	mkdir -p /usr/include/tmdb/tmdb/curl
	cp tmdb/curl/*.h /usr/include/tmdb/tmdb/curl

	mkdir -p /usr/include/tmdb/tmdb/buffer
	cp tmdb/buffer/*.h /usr/include/tmdb/tmdb/buffer

	mkdir -p /usr/include/tmdb/tmdb/query
	cp tmdb/query/*.h /usr/include/tmdb/tmdb/query

	mkdir -p /usr/include/tmdb/tmdb/request
	cp tmdb/request/*.h /usr/include/tmdb/tmdb/request

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

.PHONY: clean all libtmdb install uninstall
