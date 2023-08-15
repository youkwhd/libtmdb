#include "keyword.h"

tmdb_buffer_t *tmdb_get_keyword_details(tmdb_query_t *queries, size_t queries_length, char *keyword_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/keyword/%s", keyword_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_keyword_movies(tmdb_query_t *queries, size_t queries_length, char *keyword_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/keyword/%s/movies", keyword_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
