#include "membuffer.h"

void membuf_init(membuffer *buf, size_t size)
{
    buf->size = size;
    buf->length = 0;
    buf->data = malloc(size);
}

void membuf_reset(membuffer *membuf, size_t new_size)
{
    membuf->length = 0;
    membuf_grow(membuf, new_size);
}

void membuf_grow(membuffer *membuf, size_t new_size)
{
    membuf->data = realloc(membuf->data, new_size);
    membuf->size = new_size;
}

void membuf_append(membuffer *membuf, const char *str, size_t str_size)
{
    while (membuf->length + str_size > membuf->size)
        membuf_grow(membuf, membuf->length + (str_size * 2));

    memcpy(membuf->data + membuf->length, str, str_size);
    membuf->length += str_size;
    membuf->data[membuf->length] = '\0';
}

void membuf_cleanup(membuffer *membuf)
{
    free(membuf->data);
}
