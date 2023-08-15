#ifndef TMDB_MEMBUFFER_H
#define TMDB_MEMBUFFER_H 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tmdb_buffer_cleanup(buffer) tmdb_buffer_cleanup(buffer)

typedef struct tmdb_buffer_t {
    char *data;
    size_t size;
    size_t length;
} tmdb_buffer_t;

tmdb_buffer_t *tmdb_buffer_init(size_t size);
void tmdb_buffer_reset(tmdb_buffer_t *buffer, size_t new_size);
void tmdb_buffer_grow(tmdb_buffer_t *buffer, size_t new_size);
void tmdb_buffer_append(tmdb_buffer_t *buffer, const char *str, size_t str_size);
void tmdb_buffer_cleanup(tmdb_buffer_t *buffer);

#endif /* TMDB_MEMBUFFER_H */
