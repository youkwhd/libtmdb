CC = gcc
CFLAGS = -std=c99 -pedantic-errors -Wall -Wextra

SRC = $(wildcard *.c curl/*.c membuffer/*.c strmap/*.c query/*.c request/*c)
OBJ = $(patsubst %.c,%.o, $(SRC))
DEPS = $(wildcard *.h curl/*.c membuffer/*.c strmap/*.c query/*.c request/*c)

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

	mkdir -p /usr/include/tmdb/curl
	cp curl/*.h /usr/include/tmdb/curl

	mkdir -p /usr/include/tmdb/membuffer
	cp membuffer/*.h /usr/include/tmdb/membuffer

	mkdir -p /usr/include/tmdb/strmap
	cp strmap/*.h /usr/include/tmdb/strmap

	mkdir -p /usr/include/tmdb/query
	cp query/*.h /usr/include/tmdb/query

	mkdir -p /usr/include/tmdb/request
	cp request/*.h /usr/include/tmdb/request

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
