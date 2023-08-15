#include "buffer.h"

tmdb_buffer_t *tmdb_buffer_init(size_t size)
{
    tmdb_buffer_t *buffer = malloc(sizeof *buffer);
    if (buffer == NULL) {
        fprintf(stderr, "tmdb_buffer_init(): buffer failed to allocate memory.\n");
        exit(EXIT_FAILURE);
    }

    buffer->size = size;
    buffer->length = 0;
    buffer->data = malloc(size);
    if (buffer->data == NULL) {
        fprintf(stderr, "tmdb_buffer_init(): buffer->data failed to allocate memory.\n");
        exit(EXIT_FAILURE);
    }

    return buffer;
}

void tmdb_buffer_reset(tmdb_buffer_t *buffer, size_t new_size)
{
    buffer->length = 0;
    tmdb_buffer_grow(buffer, new_size);
}

void tmdb_buffer_grow(tmdb_buffer_t *buffer, size_t new_size)
{
    buffer->size = new_size;
    buffer->data = realloc(buffer->data, new_size);

    if (buffer->data == NULL) {
        fprintf(stderr, "tmdb_buffer_grow(): failed to reallocate memory.\n");
        exit(EXIT_FAILURE);
    }
}

void tmdb_buffer_append(tmdb_buffer_t *buffer, const char *str, size_t str_size)
{
    while ((buffer->length + 1)  + str_size > buffer->size)
        tmdb_buffer_grow(buffer, buffer->length + (str_size * 2));

    memcpy(buffer->data + buffer->length, str, str_size);
    buffer->length += str_size + 1;
    buffer->data[buffer->length + 1] = '\0';
}

void tmdb_buffer_cleanup(tmdb_buffer_t *buffer)
{
    free(buffer->data);
    free(buffer);
}
