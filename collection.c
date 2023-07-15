#include "collection.h"

TMDb_Buffer *tmdb_get_collection_details(TMDb_Query *queries, size_t queries_length, char *collection_id)
{
    char path[256];
    sprintf(path, "3/collection/%s", collection_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_collection_images(TMDb_Query *queries, size_t queries_length, char *collection_id)
{
    char path[256];
    sprintf(path, "3/collection/%s/images", collection_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_collection_translations(TMDb_Query *queries, size_t queries_length, char *collection_id)
{
    char path[256];
    sprintf(path, "3/collection/%s/translations", collection_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
