#include "discover.h"

TMDb_Buffer *tmdb_get_discover_movie(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/discover/movie");
}

TMDb_Buffer *tmdb_get_discover_tv(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/discover/tv");
}
