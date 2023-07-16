#include "network.h"

TMDb_Buffer *tmdb_get_network_details(TMDb_Query *queries, size_t queries_length, char *network_id)
{
    char path[128];
    sprintf(path, "/3/network/%s", network_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_network_alternative_names(TMDb_Query *queries, size_t queries_length, char *network_id)
{
    char path[128];
    sprintf(path, "/3/network/%s/alternative_names", network_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_network_images(TMDb_Query *queries, size_t queries_length, char *network_id)
{
    char path[128];
    sprintf(path, "/3/network/%s/images", network_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
