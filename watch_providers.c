#include "watch_providers.h"

TMDb_Buffer *tmdb_get_watch_providers_regions()
{
    return tmdb_request_create_get(NULL, 0, "/3/watch/providers/regions");
}

TMDb_Buffer *tmdb_get_watch_providers_movie(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/watch/providers/movie");
}

TMDb_Buffer *tmdb_get_watch_providers_tv(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/watch/providers/tv");
}
