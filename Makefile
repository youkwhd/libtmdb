CC = gcc
CFLAGS = -Wall -lcurl

SRC = main.c curl_util.c membuffer.c curl_handler.c tmdb.c movie.c trending.c
OBJ = main.o curl_util.o membuffer.o curl_handler.o tmdb.o movie.o trending.o
DEPS = curl_util.h membuffer.h curl_handler.h tmdb.h movie.h trending.h

all: c-tmdb

c-tmdb: $(OBJ)
	$(CC) $(CFLAGS) $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf a.out *.o
