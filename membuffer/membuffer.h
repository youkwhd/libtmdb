#ifndef __MEMBUFFER_H
#define __MEMBUFFER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tmdb_buf_cleanup(membuf) membuf_cleanup(membuf)

typedef struct membuffer {
    char *data;
    size_t size;
    size_t length;
} membuffer;

typedef membuffer TMDb_Buffer;

membuffer *membuf_init(size_t size);
void membuf_reset(membuffer *membuf, size_t new_size);
void membuf_grow(membuffer *membuf, size_t new_size);
void membuf_append(membuffer *membuf, const char *str, size_t str_size);
void membuf_cleanup(membuffer *membuf);

#endif /* __MEMBUFFER_H */
