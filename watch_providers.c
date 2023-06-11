#include "watch_providers.h"

TMDb_Buffer *tmdb_get_watch_providers_regions()
{
    return tmdb_request_create_get(tmdb_query_init(NULL, 0), NULL, 0, "/3/watch/providers/regions");
}

TMDb_Buffer *tmdb_get_watch_providers_movie(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/watch/providers/movie");
}

TMDb_Buffer *tmdb_get_watch_providers_tv(TMDb_Query *query)
{
    return tmdb_request_create_get(query, NULL, 0, "/3/watch/providers/tv");
}
