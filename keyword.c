#include "keyword.h"

TMDb_Buffer *tmdb_get_keyword_details(TMDb_Query *queries, size_t queries_length, char *keyword_id)
{
    char path[256];
    sprintf(path, "/3/keyword/%s", keyword_id);
    return tmdb_request_create_get(queries, queries_length, path);
}

TMDb_Buffer *tmdb_get_keyword_movies(TMDb_Query *queries, size_t queries_length, char *keyword_id)
{
    char path[256];
    sprintf(path, "/3/keyword/%s/movies", keyword_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
