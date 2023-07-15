#include "changes.h"

TMDb_Buffer *tmdb_get_changes_movie(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/changes");
}

TMDb_Buffer *tmdb_get_changes_tv(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/changes");
}

TMDb_Buffer *tmdb_get_changes_person(TMDb_Query *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/person/changes");
}
