#include "membuffer.h"

membuffer *membuf_init(size_t size)
{
    membuffer *membuf = malloc(sizeof *membuf);
    if (membuf == NULL) {
        fprintf(stderr, "membuf_init(): membuf failed to allocate memory.\n");
        exit(EXIT_FAILURE);
    }

    membuf->size = size;
    membuf->length = 0;
    membuf->data = malloc(size);
    if (membuf->data == NULL) {
        fprintf(stderr, "membuf_init(): membuf->data failed to allocate memory.\n");
        exit(EXIT_FAILURE);
    }

    return membuf;
}

void membuf_reset(membuffer *membuf, size_t new_size)
{
    membuf->length = 0;
    membuf_grow(membuf, new_size);
}

void membuf_grow(membuffer *membuf, size_t new_size)
{
    membuf->size = new_size;
    membuf->data = realloc(membuf->data, new_size);

    if (membuf->data == NULL) {
        fprintf(stderr, "membuf_grow(): failed to reallocate memory.\n");
        exit(EXIT_FAILURE);
    }
}

/* since we're using memcpy,
 * no need to pass membuf as double ptr?
 */
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
    free(membuf);
}
