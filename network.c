#include "network.h"

tmdb_buffer_t *tmdb_get_network_details(tmdb_query_t *queries, size_t queries_length, char *network_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/network/%s", network_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_network_alternative_names(tmdb_query_t *queries, size_t queries_length, char *network_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/network/%s/alternative_names", network_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_network_images(tmdb_query_t *queries, size_t queries_length, char *network_id)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/network/%s/images", network_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
