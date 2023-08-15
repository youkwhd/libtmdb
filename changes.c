#include "changes.h"

tmdb_buffer_t *tmdb_get_changes_movie(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/movie/changes");
}

tmdb_buffer_t *tmdb_get_changes_tv(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/tv/changes");
}

tmdb_buffer_t *tmdb_get_changes_person(tmdb_query_t *queries, size_t queries_length)
{
    return tmdb_request_create_get(queries, queries_length, "/3/person/changes");
}
