CC = gcc
CFLAGS = -Wall -lcurl

SRC = main.c curl_util.c membuffer.c c-tmdb.c
OBJ = main.o curl_util.o membuffer.o c-tmdb.o
DEPS = curl_util.h membuffer.h c-tmdb.h

all: c-tmdb

c-tmdb: $(OBJ)
	$(CC) $(CFLAGS) $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf a.out *.o
