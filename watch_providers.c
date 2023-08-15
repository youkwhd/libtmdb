#include "watch_providers.h"

tmdb_buffer_t *tmdb_get_watch_providers_regions()
{
    return tmdb_request_create_get(NULL, 0, "/3/watch/providers/regions");
}

tmdb_buffer_t *tmdb_get_watch_providers_movie(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/watch/providers/movie");
}

tmdb_buffer_t *tmdb_get_watch_providers_tv(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/watch/providers/tv");
}
