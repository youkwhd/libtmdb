#include "collection.h"

tmdb_buffer_t *tmdb_get_collection_details(tmdb_query_t *queries, size_t queries_length, char *collection_id)
{
    char path[128];
    snprintf(path, sizeof(path), "3/collection/%s", collection_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_collection_images(tmdb_query_t *queries, size_t queries_length, char *collection_id)
{
    char path[128];
    snprintf(path, sizeof(path), "3/collection/%s/images", collection_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_collection_translations(tmdb_query_t *queries, size_t queries_length, char *collection_id)
{
    char path[128];
    snprintf(path, sizeof(path), "3/collection/%s/translations", collection_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
