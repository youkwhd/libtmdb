#include "collection.h"

TMDb_Buffer *tmdb_get_collection_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "collection_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/collection/%s", tmdb_query_get(query, "collection_id"));
    return tmdb_request_create_get(query, (const char *[]){"collection_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_collection_images(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "collection_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/collection/%s/images", tmdb_query_get(query, "collection_id"));
    return tmdb_request_create_get(query, (const char *[]){"collection_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_collection_translations(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "collection_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "3/collection/%s/translations", tmdb_query_get(query, "collection_id"));
    return tmdb_request_create_get(query, (const char *[]){"collection_id"}, 1, path);
}
