CC = gcc
CFLAGS = -Wall -lcurl

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o, $(SRC))
DEPS = $(wildcard *.h)

# $(info $(SRC))
# $(info $(OBJ))
# $(info $(DEPS))

all: c-tmdb

c-tmdb: $(OBJ)
	$(CC) $(CFLAGS) $^ -o a.out

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf a.out *.o
