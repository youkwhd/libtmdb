#ifndef __MEMBUFFER_H
#define __MEMBUFFER_H

#include <stdlib.h>
#include <string.h>

typedef struct membuffer {
    char *data;
    size_t size;
    size_t length;
} membuffer;

void membuf_init(membuffer *buf, size_t size);
void membuf_reset(membuffer *membuf, size_t new_size);
void membuf_grow(membuffer *membuf, size_t new_size);
void membuf_append(membuffer *membuf, const char *str, size_t str_size);
void membuf_cleanup(membuffer *membuf);

#endif /* __MEMBUFFER_H */
