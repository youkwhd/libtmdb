#include "discover.h"

tmdb_buffer_t *tmdb_get_discover_movie(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/discover/movie");
}

tmdb_buffer_t *tmdb_get_discover_tv(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/discover/tv");
}
