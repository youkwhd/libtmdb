CC = gcc
CFLAGS = -Wall -Wextra -lcurl

BIN = a.out

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o, $(SRC))
DEPS = $(wildcard *.h)

# $(info $(SRC))
# $(info $(OBJ))
# $(info $(DEPS))

.PHONY: clean all

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(BIN)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN) $(OBJ)
