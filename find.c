#include "find.h"

TMDb_Buffer *tmdb_get_find_by_id(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "external_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/find/%s", tmdb_query_get(query, "external_id"));
    return tmdb_request_create_get(query, (const char *[]){"external_id"}, 1, path);
}
