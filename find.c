#include "find.h"

tmdb_buffer_t *tmdb_get_find_by_id(tmdb_query_t *queries, size_t queries_length, char *external_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/find/%s", external_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
