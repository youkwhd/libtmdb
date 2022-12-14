CC = gcc
CFLAGS = -std=c99 -pedantic-errors -Wall -Wextra

SRC = $(wildcard *.c curl/*.c membuffer/*.c)
OBJ = $(patsubst %.c,%.o, $(SRC))
DEPS = $(wildcard *.h curl/*.c membuffer/*.c)

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
