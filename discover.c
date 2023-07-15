#include "discover.h"

TMDb_Buffer *tmdb_get_discover_movie(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/discover/movie");
}

TMDb_Buffer *tmdb_get_discover_tv(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/discover/tv");
}
