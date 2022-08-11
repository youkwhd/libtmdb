CC = gcc
CFLAGS = -Wall -lcurl

SRC = main.c curl_util.c membuffer.c tmdb.c
OBJ = main.o curl_util.o membuffer.o tmdb.o
DEPS = curl_util.h membuffer.h tmdb.h

all: c-tmdb

c-tmdb: $(OBJ)
	$(CC) $(CFLAGS) $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf a.out *.o
