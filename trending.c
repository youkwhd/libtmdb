#include "trending.h"

tmdb_buffer_t *tmdb_get_trending_all(tmdb_query_t *queries, size_t queries_length, char *time_window)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/trending/all/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_trending_movie(tmdb_query_t *queries, size_t queries_length, char *time_window)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/trending/movie/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_trending_people(tmdb_query_t *queries, size_t queries_length, char *time_window)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/trending/people/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}

tmdb_buffer_t *tmdb_get_trending_tv(tmdb_query_t *queries, size_t queries_length, char *time_window)
{
    char path[128];
    snprintf(path, sizeof(path), "/3/trending/tv/%s", time_window);
    return tmdb_request_create_get(queries, queries_length, path);
}
