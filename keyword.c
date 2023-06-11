#include "keyword.h"

TMDb_Buffer *tmdb_get_keyword_details(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "keyword_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/keyword/%s", tmdb_query_get(query, "keyword_id"));
    return tmdb_request_create_get(query, (const char *[]){"keyword_id"}, 1, path);
}

TMDb_Buffer *tmdb_get_keyword_movies(TMDb_Query *query)
{
    if (!tmdb_query_has(query, "keyword_id")) {
        tmdb_query_cleanup(query);
        return NULL;
    }

    char path[256];
    sprintf(path, "/3/keyword/%s/movies", tmdb_query_get(query, "keyword_id"));
    return tmdb_request_create_get(query, (const char *[]){"keyword_id"}, 1, path);
}
