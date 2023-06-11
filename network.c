#include "network.h"

TMDb_Buffer *tmdb_get_network_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "network_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/network/%s", tmdb_query_get(query, "network_id"));
    return tmdb_request_create_get(query, (const char *[]){"network_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_network_alternative_names(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "network_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/network/%s/alternative_names", tmdb_query_get(query, "network_id"));
    return tmdb_request_create_get(query, (const char *[]){"network_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_network_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "network_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/network/%s/images", tmdb_query_get(query, "network_id"));
    return tmdb_request_create_get(query, (const char *[]){"network_id"}, 1, path);
}
