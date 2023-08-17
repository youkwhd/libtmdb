LIB           = libtmdb

CC            = gcc
CFLAGS        = -std=c99 -pedantic-errors -Wall -Wextra

LINKER        = ld
LDLIBS        = -lcurl
LDFLAGS       =

INST_LIB      = /usr/lib
INST_INCLUDE  = /usr/include

SRC_DIRS     := $(wildcard tmdb/*)
SRC          := $(wildcard *.c)
SRC          += $(foreach DIR,$(SRC_DIRS),$(wildcard $(DIR)/*.c))

DEPS         := $(SRC:.c=.h)
OBJ          := $(SRC:.c=.o)

all: $(LIB)

$(LIB): $(OBJ)
	$(LINKER) $(LDLIBS) -shared $^ -o $(LIB).so

install: $(LIB)
	for dir in "" $(SRC_DIRS); do \
		mkdir -p $(INST_INCLUDE)/tmdb/$$dir ; \
		cp ./$$dir/*.h $(INST_INCLUDE)/tmdb/$$dir ; \
	done

	cp $(LIB).so $(INST_LIB) 

uninstall:
	$(RM) $(INST_LIB)/$(LIB).so
	$(RM) -r $(INST_INCLUDE)/tmdb

# Assuming every file
# depens on header DEPS
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

clean:
	$(RM) $(OBJ) $(LIB).so

.PHONY: clean all $(LIB) install uninstall
